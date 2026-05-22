class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
vector<int>ans(n,1);
for (int i=0;i<n;i++){
    int j=0;

    while(j<i&&j>=0){
ans[i]*=nums[j];
j++;
    }
    if(j==i){j++;}
   while(j>i && j<n){
ans[i]*=nums[j];
j++;
   }

}
return ans;
    }
};
