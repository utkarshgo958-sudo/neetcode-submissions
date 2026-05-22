class Solution {
public:
int m,n;

    bool isMatch(string s, string p) {
         m=s.size();n=p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return dfs(s,p,0,0,dp);
    }
    private:
    bool dfs(string& s,string&p ,int i,int j,vector<vector<int>>&dp){
       if(j==n){
    return i==m;
       }
       if(dp[i][j]!=-1){return dp[i][j];}
        bool match=i<m && ((s[i]==p[j])||p[j]=='.');
        if(j+1<n && p[j+1]=='*'){
          dp[i][j]=dfs(s,p,i,j+2,dp)||(match && dfs(s,p,i+1,j,dp));    
        }
        else{
         dp[i][j]=match&&dfs(s,p,i+1,j+1,dp);
        }
        return dp[i][j];
    }
};
