class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr;curr=nums[0];
for(int i=1;i<nums.size();i++){
             while((i<nums.size()) && (nums[i]==nums[i-1])){nums.erase(nums.begin() + i);}
        }
        return nums.size();
    }
};