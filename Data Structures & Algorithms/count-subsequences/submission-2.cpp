class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size(),n=t.size();
        if(m<n){return 0;}
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return dfs(s,t,0,0,dp);
    }
private:
     int dfs(string& s,string &t,int m,int n,vector<vector<int>>&dp){
        if(n==t.size()){
            return 1;
        }
        if(m==s.size()){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int res=dfs(s,t,m+1,n,dp);
        if(s[m]==t[n]){
            res+=dfs(s,t,m+1,n+1,dp);
        }
        dp[m][n]=res;
        return res;
     }
};
