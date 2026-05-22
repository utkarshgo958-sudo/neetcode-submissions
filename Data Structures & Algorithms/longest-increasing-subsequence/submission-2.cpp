class Solution {
public:
int solve(int index,int previndex,vector<int>& nums){
if(index==nums.size()){ return 0;}
int len=0+solve(index+1,previndex,nums);

if(previndex==-1 ||nums[index]>nums[previndex]){
    len=max(len,1+solve(index+1,index,nums));
}
return len;
}
    int lengthOfLIS(vector<int>& nums) {
       return solve(0,-1,nums);
    }
};
