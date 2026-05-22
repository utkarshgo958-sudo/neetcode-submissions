class Solution {
public:
     vector<vector<int>>sol(vector<int>& nums,int idx, int tar,vector<int>&set,vector<vector<int>>&ans) {
        if(tar==0){ans.push_back(set);}
       
        else{
         for(int i=idx;i<nums.size();i++){
            if(tar-nums[i]>=0){set.push_back(nums[i]);
            sol(nums,i,tar-nums[i],set,ans);
            set.pop_back();
            }
         }
        }
        return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& nums,int target) {
        vector<int>set;
        vector<vector<int>>ans;
        return(sol(nums,0,target,set,ans));
    }
};
