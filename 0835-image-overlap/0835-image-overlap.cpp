class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();

        vector<vector<int>> x;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1)
                    x.push_back({i, j});
            }
        }

        int maxi = 0;

        for (int di = -(n - 1); di <= n - 1; di++) {
            for (int dj = -(n - 1); dj <= n - 1; dj++) {

                int count = 0;

                for (auto it : x) {
                    int ni = it[0] + di;
                    int nj = it[1] + dj;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n &&
                        img2[ni][nj] == 1) {
                        count++;
                    }
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};