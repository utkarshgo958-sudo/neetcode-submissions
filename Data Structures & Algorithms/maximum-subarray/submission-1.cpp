class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int curr=0;
int maxi=nums[0];
for(int i=0;i<nums.size();i++){
    if(curr+nums[i]<nums[i]){
        curr=nums[i];
    }
    else{
        curr+=nums[i];
    }
    maxi=max(maxi,curr);
}
return maxi;
    }
};
