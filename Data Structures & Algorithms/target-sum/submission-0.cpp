class Solution {
    vector<vector<int>>dp;
     int totalSum;
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        totalSum=accumulate(nums.begin(),nums.end(),0);
        dp=vector<vector<int>>(nums.size(),vector<int>(2*totalSum+1,INT_MIN));
        return backtrack(0,0,nums,target);
    }
    int backtrack(int i,int cursum,vector<int>& nums,int target){
        if(i==nums.size()){
            if(cursum==target){
                return 1;
            }
            else {return 0;}
        }
        if(dp[i][cursum+totalSum]!=INT_MIN){
            return dp[i][cursum+totalSum];
        }

        dp[i][cursum+totalSum]=backtrack(i+1,cursum+nums[i],nums,target) + backtrack(i+1,cursum-nums[i],nums,target);
     return dp[i][totalSum+cursum];
    }
};
