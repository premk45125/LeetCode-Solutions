class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        vector<pair<int,int>> dir = {
            {2,1},{2,-1},{-2,1},{-2,-1},
            {1,2},{1,-2},{-1,2},{-1,-2}
        };

        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> visited(8, vector<int>(8, 0));

        q.push({{start[0], start[1]}, 0});
        visited[start[0]][start[1]] = 1;

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            int x = cur.first.first;
            int y = cur.first.second;
            int moves = cur.second;

            if (x == target[0] && y == target[1]) {
                return (moves % 2 == 0);
            }

            for (auto d : dir) {
                int nx = x + d.first;
                int ny = y + d.second;

                if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8 &&
                    !visited[nx][ny]) {
                    visited[nx][ny] = 1;
                    q.push({{nx, ny}, moves + 1});
                }
            }
        }

        return false;
    }
};