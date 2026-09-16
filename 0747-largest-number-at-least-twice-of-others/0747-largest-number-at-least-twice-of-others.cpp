class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                idx=i;
                maxi=nums[i];
            }
        }

        for(int i=0;i<n;i++){
            if(i!=idx && maxi<2*nums[i])
            return -1;
        }
        return idx;
        
    }
};