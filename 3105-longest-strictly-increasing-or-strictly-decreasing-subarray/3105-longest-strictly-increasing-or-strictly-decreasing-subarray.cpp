class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 1;
        int max1=0;
        int max2=0;
        int count1=1;
        int count2=1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                count1++;
            }
            else
            count1=1;
                max1=max(max1,count1);

        }
         for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                count2++;
            }
            else
            count2=1;
                max2=max(max2,count2);

        }
        return max(max1,max2);
    }
};