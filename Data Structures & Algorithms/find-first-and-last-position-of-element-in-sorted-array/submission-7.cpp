class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;int r=n-1;int id=-1;
        while(l<=r){
             int mid=(l+r)/2;
             if(target>nums[mid]){
                           l=mid+1;        
             }
            else if(target<nums[mid]){
                        r=mid-1;
             }
             else if(target==nums[mid]) { id=mid;break;}
        }
        if(id==-1){return {-1,-1};}
        l=id;r=id;
        while(l>=0 && nums[l]==target ){l--;}
        while(r<n && nums[r]==target){r++;}
        return {l+1,r-1};
    }
};