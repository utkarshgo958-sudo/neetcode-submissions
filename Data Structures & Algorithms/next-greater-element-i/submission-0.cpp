class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>numsIndex;
        for(int i=0;i<nums1.size();i++){numsIndex[nums1[i]]=i;}
        stack<int>stack;
        vector<int>res(nums1.size(),-1);
        for(int num:nums2){
            while(!stack.empty()&& stack.top()<num){
                int val=stack.top();
                stack.pop();
                       res[numsIndex[val]]=num;
            }
            if(numsIndex.find(num)!=numsIndex.end()){
                stack.push(num);
            }
        }
return res;
    }
};