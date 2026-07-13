class Solution {
public:
    int find(int idx,vector<int>& num,vector<int>&dp){
        if(idx==0)
        return num[0];
        if(idx<0)
        return 0;
        if(dp[idx]!=-1)
        return dp[idx];
        int pick=num[idx]+find(idx-2,num,dp);
        int npick=0+find(idx-1,num,dp);

        return dp[idx]=max(pick,npick);

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ways=find(nums.size()-1,nums,dp);
        return ways;
    }
};