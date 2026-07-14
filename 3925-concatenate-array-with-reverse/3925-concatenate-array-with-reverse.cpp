class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        int i=0;
        for(i=0;i<n;i++){
            ans[i]=nums[i];
        }
        for(int j=n-1;j>=0;j--){
            ans[i++]=nums[j];
        }
        return ans;
        
    }
};