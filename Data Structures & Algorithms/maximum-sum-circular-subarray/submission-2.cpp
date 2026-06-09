class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0;
       int gmax=INT_MIN;
      int  curmin=0;
      int  gmin=INT_MAX;
      int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            curmax = max(nums[i], curmax + nums[i]);
            gmax = max(gmax, curmax);
            curmin = min(nums[i], curmin + nums[i]);
            gmin = min(gmin, curmin);
        }
        return gmax > 0 ? max(gmax, total - gmin) : gmax;
    }
};