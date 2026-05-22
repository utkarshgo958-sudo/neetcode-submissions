// class Solution {
// public:
//     bool isInterleave(string s1, string s2, string s3) {
//         return dfs(0,0,0,s1,s2,s3);
//     }
//     bool dfs(int i,int j,int k,string& s1, string & s2,string & s3){
//         if(k==s3.length()){
//             return ((i==s1.length())&&(j==s2.length()));
//         }
//         if(i<s1.length() && s1[i]==s3[k]){
//             if(dfs(i+1,j,k+1,s1,s2,s3)){
//                 return true;
//             }
//         }
//         if(j<s2.length() && s2[j]==s3[k]){
//             if(dfs(i,j+1,k+1,s1,s2,s3)){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length(),n=s2.length();
        if(m+n!=s3.length()){return false;}
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return dfs(0,0,0,s1,s2,s3,dp);
    }
    bool dfs(int i,int j,int k,string& s1, string & s2,string & s3,vector<vector<int>>&dp){
        if(k==s3.length()){
            return ((i==s1.length())&&(j==s2.length()));
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool res=false;
        if(i<s1.length() && s1[i]==s3[k]){
            res=dfs(i+1,j,k+1,s1,s2,s3,dp);
        }
        if(!res && j<s2.length() && s2[j]==s3[k]){
            res=dfs(i,j+1,k+1,s1,s2,s3,dp);
        }
        dp[i][j]=res;
        return res;
    }
};


















