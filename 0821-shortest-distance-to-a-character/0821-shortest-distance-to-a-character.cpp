class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();

        vector<int> pos;
        for(int i = 0; i < n; i++) {
            if(s[i] == c)
                pos.push_back(i);
        }

        int l = 0;
        int r = min(1, (int)pos.size() - 1);

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            while(r < pos.size() - 1 && i > pos[r]) {
                l++;
                r++;
            }

            ans.push_back(min(abs(i - pos[l]), abs(i - pos[r])));
        }

        return ans;
    }
};