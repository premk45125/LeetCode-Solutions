class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> v;
        unordered_map<int,int> freq;

        for(auto it : nums) {
            freq[it]++;
        }

   
        for(auto it : freq) {
            v.push_back({it.second, it.first});
        }

        
        sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b) {
            if(a.first == b.first)
                return a.second > b.second;
            else
                return a.first < b.first;
        });

        vector<int> ans;

        for(auto it : v) {
            int count = it.first;

            while(count--) {
                ans.push_back(it.second);
            }
        }

        return ans;
    }
};