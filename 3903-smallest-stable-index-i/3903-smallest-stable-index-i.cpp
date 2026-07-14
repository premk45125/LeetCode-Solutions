class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>suffix(n);
        int mini=nums[n-1];
        suffix[n-1]=mini;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<mini)
            mini=nums[i];
            suffix[i]=mini;
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           if(maxi<nums[i])
           maxi=nums[i];
           if(maxi-suffix[i]<=k)
           return i;
        }
        return -1;
        
    }
};