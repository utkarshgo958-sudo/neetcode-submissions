class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int l=m+n-1;
        while(i>=0 && j>=0){
             if(nums1[i]>nums2[j]){
                         nums1[l]=nums1[i];
                         i--;l--;
             }
             else if(nums1[i]<nums2[j]){
                    nums1[l]=nums2[j];
                    j--;l--;
             }
             else{nums1[l]=nums2[j];j--;l--;}
        }
        while(j>=0){
            nums1[l]=nums2[j];j--;l--;
        }
    }
};