class Solution {
public:
int solvetab(vector<int>&coins,int x){
    vector<int>dp(x+1,INT_MAX);
    int mini;
    int ans;
    int n=coins.size();
    dp[0]=0;
    for(int i=1;i<=x;i++){
         mini=INT_MAX;
        for(int j=0;j<n;j++){
          if(i-coins[j]>=0 && (dp[i-coins[j]]!=INT_MAX)){
            ans=1+dp[i-coins[j]];
            mini=min(mini,ans);
          }
        }
        dp[i]=mini;

    }
    return dp[x];
}
    int coinChange(vector<int>& coins, int amount) {
        int ans= solvetab(coins,amount);
        return (ans==INT_MAX)?-1:ans;
    }
};