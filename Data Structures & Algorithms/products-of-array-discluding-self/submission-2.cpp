class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> lp(n,1);
        vector<int> rp(n,1);
        for(int i=1;i<n;i++){
        lp[i]=lp[i-1]*nums[i-1];
        }
        for(int j=n-2;j>=0;j--){
            rp[j]=rp[j+1]*nums[j+1];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=lp[i]*rp[i];
        }
        return ans;
//         int n=nums.size();
// vector<int>ans(n,1);
// for (int i=0;i<n;i++){
//     int j=0;

//     while(j<i&&j>=0){
// ans[i]*=nums[j];
// j++;
//     }
//     if(j==i){j++;}
//    while(j>i && j<n){
// ans[i]*=nums[j];
// j++;
//    }

// }
// return ans;
    }
};
