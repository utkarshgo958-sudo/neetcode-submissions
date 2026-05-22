class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        vector<int>newNums(n+2,1);
        for(int i=0;i<n;i++){
            newNums[i+1]=nums[i];
        }
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        return dfs(1,n,dp,newNums);
    }
    int dfs(int l,int r,vector<vector<int>>&dp,vector<int>&newNums){
        if(l>r){return 0;}
        if(dp[l][r]!=-1){return dp[l][r];}
        dp[l][r]=0;
        for(int i=l;i<=r;i++){
            int coins=newNums[l-1]*newNums[i]*newNums[r+1];
            coins+=dfs(l,i-1,dp,newNums)+dfs(i+1,r,dp,newNums);
            dp[l][r]=max(dp[l][r],coins);
        }
        return dp[l][r];
    }
};
