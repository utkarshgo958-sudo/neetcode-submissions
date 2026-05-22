class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n+1,0);
        for(int i=0;i<n;i++){
            prefixSum[i+1]=prefixSum[i]+nums[i];
        }
        int res=n+1;
        for(int i=0;i<n;i++){
            int l=i,r=n;
           while(l<r){
            int mid=(l+r)/2;
            int cursum=prefixSum[mid+1]-prefixSum[i];
            if(cursum>=target){
                r=mid;
            }
            else{l=mid+1;}
           }
           if(l!=n){res=min(res,l-i+1);}
        }
        return res%(n+1);
    }
};