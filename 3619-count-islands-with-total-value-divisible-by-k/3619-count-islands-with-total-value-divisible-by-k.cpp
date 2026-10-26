class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        int count=0;
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        queue<pair<int,int>>q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(visited[i][j] ||grid[i][j]==0)
                continue;
                else{
                    q.push({i,j});
                    visited[i][j]=true;
                    long long sum=0;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        sum+=grid[x][y];
                        q.pop();
                        int up=x-1;
                        int down=x+1;
                        int left=y-1;
                        int right=y+1;
                        if(up>=0 &&!visited[up][y] &&grid[up][y]){
                            q.push({up,y});
                            visited[up][y]=true;
                        }
                        if(down<m &&!visited[down][y]&&grid[down][y]){
                            q.push({down,y});
                            visited[down][y]=true;
                        }
                        if(left>=0 &&!visited[x][left]&&grid[x][left]){
                            q.push({x,left});
                            visited[x][left]=true;
                        }
                        if(right<n&&!visited[x][right] &&grid[x][right]){
                            q.push({x,right});
                            visited[x][right]=true;
                        }
                    }
                    if(sum%k==0)
                    count++;
                    sum=0;
                }
                
            }
        }
        return count;
        
    }
};