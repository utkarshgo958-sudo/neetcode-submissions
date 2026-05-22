class Solution {
public:
     vector<vector<int>> solve(vector<int>&nums,int i,vector<int>&set,vector<vector<int>>&ans)
     {
        if(i==nums.size()){ans.push_back(set);}
        else {
            set.push_back(nums[i]);
            vector<int>inc=set;
        set.pop_back();
        vector<int>exc=set;
        solve(nums,i+1,inc,ans);
        solve(nums,i+1,exc,ans);}
        return ans;
     }


    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>set;
        vector<vector<int>>fin=solve(nums,0,set,ans);
        return fin;
    }
};
