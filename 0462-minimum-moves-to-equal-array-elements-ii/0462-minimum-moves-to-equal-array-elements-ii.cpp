class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        // long long sum=0;
        // for(auto it:nums){
        //     sum+=it;
        // }
        sort(nums.begin(),nums.end());
        int mid=n/2;
        int count=0;
        for(int i=0;i<n;i++){
            count +=abs(nums[i]-nums[mid]);
        }
        return count;
        
    }
};