class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> row(26);

        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

        for(char c : r1) row[c - 'a'] = 1;
        for(char c : r2) row[c - 'a'] = 2;
        for(char c : r3) row[c - 'a'] = 3;

        vector<string> ans;

        for(string &word : words) {
            int r = row[tolower(word[0]) - 'a'];
            bool ok = true;

            for(char c : word) {
                if(row[tolower(c) - 'a'] != r) {
                    ok = false;
                    break;
                }
            }

            if(ok)
                ans.push_back(word);
        }

        return ans;
    }
};