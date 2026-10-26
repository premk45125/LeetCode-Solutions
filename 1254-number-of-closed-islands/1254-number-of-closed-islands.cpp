class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
         int m=grid.size();
        int n=grid[0].size();

        int count=0;
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        queue<pair<int,int>>q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(visited[i][j] ||grid[i][j]==1)
                continue;
                else if(i==0||i==m-1||j==0||j==n-1)
                continue;
                else{
                    q.push({i,j});
                    visited[i][j]=true;
                    bool flag=false;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        int up=x-1;
                        int down=x+1;
                        int left=y-1;
                        int right=y+1;
                        
                        if(up>=0 &&!visited[up][y] &&grid[up][y]==0){
                            if(up==0)
                            {
                                flag=true;
                            }
                            q.push({up,y});
                            visited[up][y]=true;
                        }
                        if(down<m &&!visited[down][y]&&grid[down][y]==0){
                            if(down==m-1)
                            {
                                flag=true;
                            }
                            q.push({down,y});
                            visited[down][y]=true;
                        }
                        if(left>=0 &&!visited[x][left]&&grid[x][left]==0){
                            if(left==0)
                            {
                                flag=true;
                            }
                            q.push({x,left});
                            visited[x][left]=true;
                        }
                        if(right<n&&!visited[x][right] &&grid[x][right]==0){
                            if(right==n-1)
                            {
                                flag=true;
                            }
                            q.push({x,right});
                            visited[x][right]=true;
                        }
                    }
                    if(!flag)
                    count++;
                    
                }
                
            }
        }
        return count;
         
    }
};