class Solution {
    // private:
//     int f(int i,int buy,vector<int>& prices){
// int n=prices.size();
        // if(i>=prices.size()){return 0;}
        // if(dp[i][buy]!=-1){return dp[i][buy];}
        // if(buy==1){
        //     dp[i][1]=max(-prices[i]+f(i+1,0,prices,dp),f(i+1,1,prices,dp));
        //    return dp[i][1];
        // }
        // else{
        //     dp[i][0]=max(prices[i]+f(i+2,1,prices,dp),f(i+1,0,prices,dp));
        //     return dp[i][0];
        // }
    //     return dp[0][1];
    // }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<int>>dp(n,vector<int>(2,-1));
        // return f(0,1,prices,dp);
// vector<vector<int>>dp(n+2,vector<int>(2,0));
//  for(int i=n-1;i>=0;i--){
//             for(int buy=1;buy>=0;buy--){
//              if(buy==1){
//              dp[i][buy]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
//              }
//              else{
//                    dp[i][0]=max(prices[i]+dp[i+2][1],dp[i+1][0]);
//              }
//             }
//         }
// return dp[0][1];

vector<int>f2(2,0);
vector<int>f1(2,0);
vector<int>curr(2,0);
    for(int i=n-1;i>=0;i--){                  
             curr[1]=max(-prices[i]+f1[0],f1[1]);   
                 curr[0]=max(prices[i]+f2[1],f1[0]);  
                 f2[0]=f1[0];
                 f2[1]=f1[1];
                 f1[1]=curr[1];
                 f1[0]=curr[0];           
        }
        return curr[1];
    }
};
