class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> countit;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            countit[nums[i]]=i;
        }
        for (int i=0;i<n;i++){
        int diff=target-nums[i];
        if(countit.count(diff)&&countit[diff]!=i){
            return {i,countit[diff]};
        }
        }
        return {};
    }
};
