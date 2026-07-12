class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1000000007;

        long long K = k;
        long long orig = k;
        long long cost = 0;
        long long j = 1;

        for (int num : nums) {
            if (K < num) {
                long long need = (num - K + orig - 1) / orig;

                long long first = j;
                long long last = j + need - 1;

                long long a = need;
                long long b = first + last;

                if (a % 2 == 0)
                    a /= 2;
                else
                    b /= 2;

                long long sum = ((a % MOD) * (b % MOD)) % MOD;

                cost = (cost + sum) % MOD;

                K += need * orig;
                j += need;
            }

            K -= num;
        }

        return (int)cost;
    }
};