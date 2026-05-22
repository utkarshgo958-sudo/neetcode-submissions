class Solution {
public:
int solve(vector<int>& prices,vector<vector<int>>&dp,int id,int i){
        if(i==prices.size()){
            return 0;
        }
        if(dp[i][id]!=-1){return dp[i][id];}
        int res=solve(prices,dp,id,i+1);
        if(id==0){res=max(res,-prices[i]+solve(prices,dp,1,i+1));}
        else{res=max(res,prices[i]+solve(prices,dp,0,i+1));}
        dp[i][id]=res;
        return res;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,dp,0,0);
    }
};