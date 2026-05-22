class Solution {
public:
     vector<vector<int>> directions={{-1,0},{1,0},{0,-1},{0,1}};
     vector<vector<int>>dp;
     int rows,cols;
int dfs(vector<vector<int>>& matrix,int r,int c,int prevVal){
    if(r<0||r>=rows||c<0||c>=cols||matrix[r][c]<=prevVal){
        return 0;
    }
    if(dp[r][c]!=-1){
        return dp[r][c];
    }
    int res=1;
    for(vector<int>d:directions){
        res=max(res,1+dfs(matrix,r+d[0],c+d[1],matrix[r][c]));
    }
    dp[r][c]=res;
    return res;
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         rows=matrix.size();cols=matrix[0].size();
        dp=vector<vector<int>>(rows,vector<int>(cols,-1));
        int LIP=0;
        for(int r=0;r<rows;r++){
            for(int j=0;j<cols;j++){
                LIP=max(LIP,dfs(matrix,r,j,INT_MIN));
            }
        }
        return LIP;
    }
};
