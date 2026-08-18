class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1)
            return {0};

        vector<int> deg(n, 0);
        vector<vector<int>> adj(n);

        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);

            deg[it[0]]++;
            deg[it[1]]++;
        }

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (deg[i] == 1)
                q.push(i);
        }

        int remaining = n;

        while (remaining > 2) {
            int size = q.size();
            remaining -= size;

            while (size--) {
                int node = q.front();
                q.pop();

                for (int next : adj[node]) {
                    deg[next]--;

                    if (deg[next] == 1)
                        q.push(next);
                }
            }
        }

        vector<int> ans;

        while (!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }

        return ans;
    }
};