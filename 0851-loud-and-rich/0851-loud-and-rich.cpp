class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        
        int n = quiet.size();

        vector<vector<int>> adj(n);

        for(auto it : richer) {
            adj[it[1]].push_back(it[0]);
        }

        vector<int> answer(n);

        for(int i = 0; i < n; i++) {
            answer[i] = i;
        }

        for(int i = 0; i < n; i++) {

            queue<int> q;
            vector<bool> visited(n, false);

            q.push(i);
            visited[i] = true;

            while(!q.empty()) {

                int node = q.front();
                q.pop();

                if(quiet[node] < quiet[answer[i]]) {
                    answer[i] = node;
                }

                for(auto it : adj[node]) {

                    if(!visited[it]) {
                        visited[it] = true;
                        q.push(it);
                    }
                }
            }
        }

        return answer;
    }
};