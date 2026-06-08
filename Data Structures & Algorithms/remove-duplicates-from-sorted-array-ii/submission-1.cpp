class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k=2;int  n=nums.size();int i=2;
        if(n<=2){return n;}
        while(i<n){
        while(i<n && nums[i]==nums[k-2]){i++;}
       if(k<n && i<n) {nums[k]=nums[i];k++;i++;}
        }
        return k;
    }
};