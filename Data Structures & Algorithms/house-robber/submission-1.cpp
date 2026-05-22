class Solution {
public:
// int solve(vector<int>&nums,int idx,int n){
//     if(idx>=n){return 0;}
//     else{return max(solve(nums,idx+1,n),( nums[idx]+solve(nums,idx+2,n)));}
// }
    int rob(vector<int>& nums) {
        int n=nums.size();
       vector<int>dp(n,-1);
       dp[0]=nums[0];
       dp[1]=max(nums[0],nums[1]);
       for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],(dp[i-2]+nums[i]));
       }
        return dp[n-1];
    }
};
