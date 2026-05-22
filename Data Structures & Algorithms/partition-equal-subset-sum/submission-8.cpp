class Solution {
public:
  bool f(int idx,int target,vector<int>& nums,vector<vector<int>>& dp){
    if(target==0){return true;}
    if(idx==0){return (target==nums[0]);}
   
    if(dp[idx][target]!=-1){
        return dp[idx][target]==1;
    }
    bool nottake=f(idx-1,target,nums,dp);
    bool take=false;
    if(nums[idx]<=target){
        take=f(idx-1,target-nums[idx],nums,dp);
    }
   dp[idx][target]=take|nottake;
    return dp[idx][target]==1;
  }
    bool canPartition(vector<int>& nums) {
        int summ=0;
        for(int i=0;i<nums.size();i++){summ+=nums[i];}
        if(summ%2==1){return false;}
        int target=summ/2;
        int n=nums.size();
           vector<vector<int>>dp(n,vector<int>(target+1,-1));
           return(f(n-1,target,nums,dp));
        
    }
};