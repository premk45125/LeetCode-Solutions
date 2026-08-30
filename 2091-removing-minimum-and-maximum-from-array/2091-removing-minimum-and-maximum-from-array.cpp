class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 1;

        int idx1=-1;
        int idx2=-1;
        for(int i=0;i<n;i++){
            if(idx1!=-1){
                if(nums[i]<nums[idx1])
                idx1=i;
            }
            else
            {
                idx1=i;
            }
               if(idx2!=-1){
                if(nums[i]>nums[idx2])
                idx2=i;
            }
            else
            {
                idx2=i;
            }

        }
        int ans1=n+1;
        int ans2=n+1;
        int ans3=n+1;
        int maxi=max(idx1,idx2);
        int mini=min(idx1,idx2);
        int ans=0;
        ans1= maxi+1;
        ans2= n-mini;
        ans=min(ans1,ans2);
        ans3= mini+1 + n-maxi;
        ans=min(ans,ans3);
        return ans;

        
    }
};