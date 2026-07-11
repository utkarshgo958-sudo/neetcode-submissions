class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;int n=grid.size();int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){q.push({i,0});vis[i][0]=1;}
            if(grid[i][m-1]==1){q.push({i,m-1});vis[i][m-1]=1;}
        }
        for(int j=1;j<m-1;j++){
            if(grid[0][j]==1){q.push({0,j});vis[0][j]=1;}
            if(grid[n-1][j]==1){q.push({n-1,j});vis[n-1][j]=1;}
        }
       vector<pair<int,int>>directions={{-1,0},{1,0},{0,1},{0,-1}};
        while(!q.empty()){
           int length=q.size();
           for(int i=0;i<length;i++){
            auto curr=q.front();q.pop();
            int r=curr.first;int c=curr.second;
            for(const auto& dir:directions){
                int row=r+dir.first;int col=c+dir.second;
                if(row>=0 && col>=0 && row<n && col<m && vis[row][col]==0 && grid[row][col]==1){
                    vis[row][col]=1;
                    q.push({row,col});
                }
            }
           }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};