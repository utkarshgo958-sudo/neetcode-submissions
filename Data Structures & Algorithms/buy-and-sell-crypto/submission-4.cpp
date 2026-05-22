class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;  int r=1;
        int profitmax=0;
        int profit=0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
            profit=prices[r]-prices[l];
            }
            else{l=r;}
            r++;
            profitmax=max(profit,profitmax);
        }
        return profitmax;
    }
};
