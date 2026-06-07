class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();int m=matrix[0].size();
          vector<vector<int>>dp(n+1,vector<int>(m+1,0));
          int maxsq=0;
          for(int r=n-1;r>=0;r--){
            for(int c=m-1;c>=0;c--){

if(matrix[r][c]=='1'){dp[r][c]=1+min({dp[r+1][c],dp[r][c+1],dp[r+1][c+1]});
          maxsq=max(maxsq,dp[r][c]);
          }

            }
          }

          
return maxsq*maxsq;

    }
};