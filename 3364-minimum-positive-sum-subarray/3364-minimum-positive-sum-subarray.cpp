class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=INT_MAX;
        int n=nums.size();

        vector<int>prefix(n,0);
        prefix[0]+=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]+=nums[i]+prefix[i-1];
        }
         
         for(int i=0;i<n;i++){

            for(int j=i+l-1;j<n&&j<=i+r-1;j++){
                int diff=prefix[j]-prefix[i]+nums[i];
                if(diff>0)
                sum=min(sum,diff);
            }
         }

        if(sum==INT_MAX)
        return -1;
        else
        return sum;
        
    }
};