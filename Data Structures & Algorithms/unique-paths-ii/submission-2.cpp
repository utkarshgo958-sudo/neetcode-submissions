class Solution {
public:
int m,n;
    int solve(vector<vector<int>>& obstacleGrid,
    vector<vector<int>>&dp,int i,int j ){

        if(i==m-1 && j==n-1){
            if(obstacleGrid[i][j]==1){return 0;}
            return 1;
        }
        if(i>=m || j>=n){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}
        if(obstacleGrid[i][j]==1){return 0;}
        dp[i][j]=solve(obstacleGrid,dp,i,j+1)+solve(obstacleGrid,dp,i+1,j);
        return dp[i][j];
    
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m=obstacleGrid.size();n=obstacleGrid[0].size();
        
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return solve(obstacleGrid,dp,0,0);
    }
};