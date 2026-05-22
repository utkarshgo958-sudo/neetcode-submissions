class Solution {
    vector<pair<int,int>> directions={{-1,0},{1,0},{0,1},{0,-1}};
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows=heights.size();
        int cols=heights[0].size();
        vector<vector<bool>> pac(rows,vector<bool>(cols,false));
        vector<vector<bool>> atl(rows,vector<bool>(cols,false));
        for(int i=0;i<rows;i++){
           dfs(i,0,pac,heights);
           dfs(i,cols-1,atl,heights);
        }
for(int j=0;j<cols;j++){
          dfs(0,j,pac,heights);
          dfs(rows-1,j,atl,heights);
        }
        vector<vector<int>> res;
        for(int r=0;r<rows;r++){
            for(int c=0;c<cols;c++){
                if(pac[r][c]&& atl[r][c]){
                    res.push_back({r,c});
                }
            }
        }
        return res;
    }
    private:
        void dfs(int r,int c, vector<vector<bool>>& ocean,vector<vector<int>>& heights){
            ocean[r][c]=true;
            for(auto [dr,dc]:directions){
                int nr=r+dr;
                int nc=dc+c;
                if(nr>=0 && nr<heights.size() && nc>=0 && nc<heights[0].size() && !(ocean[nr][nc])&&heights[nr][nc]>=heights[r][c]){
                    dfs(nr,nc,ocean,heights);
                }
            }
        }
};
