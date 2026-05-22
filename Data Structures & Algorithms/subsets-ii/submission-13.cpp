class Solution {
public:
void getAllSubsets(vector<int>&set ,int i,vector<vector<int>>&all,vector<int>&nums){
    if(i==nums.size()){all.push_back(set);}
    else{
          set.push_back(nums[i]);
          getAllSubsets(set,i+1,all,nums);
          set.pop_back();
          int idx=i+1;
          while(idx<nums.size()&&(nums[idx]==nums[idx-1])){idx++;}
           getAllSubsets(set,idx,all,nums);
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>set;
        vector<vector<int>>all;
        getAllSubsets(set,0,all,nums);
        return all;
    }
};