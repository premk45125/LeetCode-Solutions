class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>ans;

        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[1]].push_back(it[0]);
        }

        for(int i=0;i<n;i++){
            vector<int>res;
            vector<bool>visited(n,false);
            queue<int>q;
            q.push(i);
            visited[i]=true;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto it:adj[node]){

                    if(!visited[it]){
                        res.push_back(it);
                    q.push(it);
                    visited[it]=true;
                    }
                }
            }
            sort(res.begin(),res.end());
            ans.push_back(res);
        }
        return ans;
        
    }
};