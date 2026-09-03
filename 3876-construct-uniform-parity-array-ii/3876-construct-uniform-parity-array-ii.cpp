class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int minodd = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 1) {
                minodd = min(minodd, nums1[i]);
            }
        }

        if (minodd == INT_MAX)
            return true;

        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                if (nums1[i] < minodd)
                    return false;
            }
        }

        return true;
    }
};