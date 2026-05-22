class Solution {
public:
vector<vector<int>>solve(vector<int>&cand,int i,int tar,vector<int>& set,vector<vector<int>>& ans,int n){
   if(tar==0){ans.push_back(set);}

  if(i<n && tar>0){
    set.push_back(cand[i]);
    if(tar-cand[i]>=0){solve(cand,i+1,tar-cand[i],set,ans,n);}
    set.pop_back();
    while(cand[i+1]==cand[i]){i++;}
    solve(cand,i+1,tar,set,ans,n);
  }
   return ans;

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>set;
        vector<vector<int>>ans;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        return solve(candidates,0,target,set,ans,n);
    }
};
