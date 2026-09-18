class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>>adj(n+1);
        for(auto it:dislikes){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>color(n+1,-1);
        vector<bool>visited(n+1,false);
        queue<int>q;
       for(int i=1;i<=n;i++){
        if(!visited[i]){
             q.push(i);
        color[i]=1;
        visited[i]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(color[it]==-1)
                color[it]=1-color[node];
                else if(color[it]==color[node])
                return false;
                if(!visited[it]){
                q.push(it);
                visited[it]=true;
                }
            }
        }
        }
       }
        return true;
    }
};