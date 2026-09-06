class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int l = 0;
        int r = n / 2 - 1;

        long long total = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (i == r)
                sum = total;

            total += nums[i];
        }

        for (int i = 0; i < n; i++) {
            sum += nums[r % n];

            if (sum > total - sum)
                count++;

            sum -= nums[l];
            l++;
            r++;
        }

        return count;
    }
};