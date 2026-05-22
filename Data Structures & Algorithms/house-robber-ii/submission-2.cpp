class Solution {
public:
int roblin(vector<int>& nums,int j,int n){
    vector<int>dp(n,0);
    dp[j]=nums[j];
    dp[j+1]=max(nums[j],nums[j+1]);
    for(int i=j+2;i<n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
    }
    return dp[n-1];
}

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}
        if(n==2){return max(nums[0],nums[1]);}
        int a=roblin(nums,0,n-1);
        int b=roblin(nums,1,n);
        return max(a,b);
    }
};
