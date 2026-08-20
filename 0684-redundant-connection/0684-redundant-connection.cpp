class Solution {
public:

    int findParent(int node, vector<int>& parent) {
        if(parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node], parent);
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();

        vector<int> parent(n + 1);

        for(int i = 1; i <= n; i++) {
            parent[i] = i;
        }

        for(auto it : edges) {

            int p1 = findParent(it[0], parent);
            int p2 = findParent(it[1], parent);

            if(p1 == p2)
                return {it[0], it[1]};

            parent[p2] = p1;
        }

        return {};
    }
};