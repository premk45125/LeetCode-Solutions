class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int maxi=0;

        for(int i=0;i<n;i++){
            int sum=0;
            for(auto it:accounts[i]){
                sum+=it;
            }
            maxi=max(sum,maxi);
        }
        return maxi;
        
    }
};