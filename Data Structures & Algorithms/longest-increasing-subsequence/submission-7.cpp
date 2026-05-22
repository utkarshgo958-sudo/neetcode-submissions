class Solution {
public:
    int solve(int index,int prevIndex,vector<int>& nums,vector<vector<int>>& dp){
        if(index==nums.size()){
            return 0;
        }
        if(dp[index][prevIndex+1]!=-1){
            return dp[index][prevIndex+1];
        }
        int len=solve(index+1,prevIndex,nums,dp);
        if(prevIndex==-1||nums[index]>nums[prevIndex]){
            len=max(len,1+solve(index+1,index,nums,dp));
        }
        dp[index][prevIndex+1]=len;
        return len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(0,-1,nums,dp);
    }
};


// class Solution {
// public:
// int solve(int index,int previndex,vector<int>& nums,vector<vector<int>>& dp){
// if(index==nums.size()){ return 0;}
// if(dp[index][previndex+1]!=-1){
//     return dp[index][previndex+1];
// }
// int len=0+solve(index+1,previndex,nums,dp);

// if(previndex==-1 ||nums[index]>nums[previndex]){
//     len=max(len,1+solve(index+1,index,nums,dp));
// }
// dp[index][previndex+1]=len;
// return len;
// }
//     int lengthOfLIS(vector<int>& nums) {
//         int n=nums.size();
//         vector<vector<int>>dp(n,vector(n+1,-1));
//        return solve(0,-1,nums,dp);
//     }
// };



