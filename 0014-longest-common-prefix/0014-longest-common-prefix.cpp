class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int limit = INT_MAX;

        for (int i = 0; i < n; i++) {
            limit = min(limit, (int)strs[i].length());
        }

        string res = "";
        int j = 0;

        while (j < limit) {
            char ch = strs[0][j];
            bool flag = true;

            for (int k = 1; k < n; k++) {
                if (ch != strs[k][j]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                res += ch;
                j++;
            } else {
                break;
            }
        }

        return res;
    }
};