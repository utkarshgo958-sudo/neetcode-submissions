class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int currmin=1;
        int currmax=1;
        int res=nums[0];
        for(int num:nums){
            int a=currmax * num;
            int b=currmin * num;
            currmax=max((max(a,b)),num);
            currmin=min(min(a,b),num);
            res=max(res,currmax);
        }
        return res;
    }
};
