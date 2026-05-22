class Solution {
    private:
    int f(int i,int buy,vector<int>& prices,vector<vector<int>>& dp){
        if(i>=prices.size()){return 0;}
        if(dp[i][buy]!=-1){return dp[i][buy];}
        if(buy==1){
            dp[i][1]=max(-prices[i]+f(i+1,0,prices,dp),f(i+1,1,prices,dp));
           return dp[i][1];
        }
        else{
            dp[i][0]=max(prices[i]+f(i+2,1,prices,dp),f(i+1,0,prices,dp));
            return dp[i][0];
        }
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,dp);
    }
};
