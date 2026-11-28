class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            sum1+=nums[i];
            sum2+=nums[n-1-i];
        }
        return sum2-sum1;
        
    }
};