class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(auto it:bulbs){
            mpp[it]++;
        }
        vector<int>flag(101,false);

        for(auto it:bulbs){
            if(mpp[it]%2!=0 && flag[it]!=true){
                ans.push_back(it);
                flag[it]=true;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};