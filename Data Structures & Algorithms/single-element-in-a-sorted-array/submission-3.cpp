class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int n=nums.size();
        if(n==1){return nums[0];}
        int r=nums.size()-1;
        int mid;
        while(l<=r){
            mid=(r+l)/2;
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    l=mid+1;
                }
                else if(nums[mid]==nums[mid-1]){
                  r=mid-1;
                }
                else{return nums[mid];}
            }
            else {
                if(nums[mid]==nums[mid+1]){
                    r=mid-1;
                }
                else if(nums[mid]==nums[mid-1]){
                 l=mid+1;
                }
                else{return nums[mid];}
            }
            
        }

    }
};