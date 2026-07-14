class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums;

        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], nums[i]);
        }

        int leftMax = nums[0];
        vector<int> ans;
        ans.push_back(nums[0]);

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > leftMax || nums[i] > suffix[i + 1])
                ans.push_back(nums[i]);

            leftMax = max(leftMax, nums[i]);
        }

        ans.push_back(nums[n - 1]);

        return ans;
    }
};