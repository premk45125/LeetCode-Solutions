class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            total |= nums[i];
        }

        return total * (1 << (n - 1));
    }
};