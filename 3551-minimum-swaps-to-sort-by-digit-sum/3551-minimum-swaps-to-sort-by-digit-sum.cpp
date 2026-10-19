class Solution {
public:
    int sumdig(int val) {
        int sum = 0;
        while (val > 0) {
            sum += val % 10;
            val /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end(), [&](auto a, auto b) {
            int s1 = sumdig(a.first);
            int s2 = sumdig(b.first);

            if (s1 != s2)
                return s1 < s2;

            return a.first < b.first;
        });

        vector<bool> vis(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || v[i].second == i)
                continue;

            int j = i;
            int cycle = 0;

            while (!vis[j]) {
                vis[j] = true;
                j = v[j].second;
                cycle++;
            }

            if (cycle > 1)
                swaps += cycle - 1;
        }

        return swaps;
    }
};