class Solution {
public:
int solve(vector<int>& cost , int c,int n){
    if(c>=n){return 0;}
    else {
    return min((cost[c]+solve(cost,c+1,n)),(cost[c]+solve(cost,c+2,n)));
    }
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
     return min(solve(cost,0,n),solve(cost,1,n));
    }
    
};
