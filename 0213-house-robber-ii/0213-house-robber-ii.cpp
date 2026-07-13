
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
        if(nums.size()==1)
        return nums[0];
        vector<int> dp1(nums.size(),-1);
          vector<int> dp2(nums.size(),-1);
          vector<int> v1;
          vector<int>v2;
          for(int i=0;i<nums.size();i++){
            if(i!=0)
            v1.push_back(nums[i]);
            if(i!=nums.size()-1)
            v2.push_back(nums[i]);
          }

        int ar1=find(v1.size()-1,v1,dp1);
        int ar2=find(v2.size()-1,v2,dp2);
        return max(ar1,ar2);
    }
};