class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> v;
        int total = 0;

        for (char ch : s) {
            if (ch == '0')
                v.push_back(-1);
            else {
                v.push_back(1);
                total++;
            }
        }

        vector<int> temp;
        int sum = v[0];

        for (int i = 1; i < v.size(); i++) {
            if (v[i] != v[i - 1]) {
                temp.push_back(sum);
                sum = v[i];
            } else {
                sum += v[i];
            }
        }
        temp.push_back(sum);

        int ans = total;

        for (int i = 1; i + 1 < temp.size(); i++) {
            if (temp[i] > 0 && temp[i - 1] < 0 && temp[i + 1] < 0) {
                ans = max(ans, total + abs(temp[i - 1]) + abs(temp[i + 1]));
            }
        }

        return ans;
    }
};