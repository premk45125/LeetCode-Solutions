class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<bool> visited(n,false);

        int count=0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                int nodes=0;
                int edges=0;
                queue<int>q;
                q.push(i);
                visited[i]=true;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    nodes++;
                    for(auto it:adj[node]){
                        edges++;
                        if(!visited[it])
                        {
                        q.push(it);
                        visited[it]=true;
                        }
                    }
                }
                edges/=2;
                if(edges==nodes*(nodes-1)/2)
                count++;
            }
        }
        return count;
        
    }
};