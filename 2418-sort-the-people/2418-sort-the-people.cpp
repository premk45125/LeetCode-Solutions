class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> mpp;
        vector<string> ans;

        int n = names.size();

        for(int i = 0; i < n; i++) {
            mpp[heights[i]] = names[i];
        }

        for(auto it : mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};