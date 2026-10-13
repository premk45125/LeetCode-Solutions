class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();

       for(int i=0;i<n;i++){
        if(nums[i]<0)
        nums[i]*=-1;
       }
        sort(nums.begin(),nums.end());
        long long ans=0;
        int start=n/2;
        for(int i=0;i<n;i++){
            if(i<start)
            ans-=nums[i]*nums[i];
            else
            ans+=nums[i]*nums[i];
        }
        return ans;
    }
};