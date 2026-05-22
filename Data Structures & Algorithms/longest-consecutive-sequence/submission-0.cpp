class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){return 0;}
        if(nums.size()==1){return 1;}
        sort(nums.begin(),nums.end());
        int res=1;
        int streak=1;
        int curr=nums[0];
        for(int i=0;i<nums.size();i++){
        if(curr==nums[i]){
            continue;
        }
        else if(curr==(nums[i]-1)){
            streak++;
            curr=nums[i];

        }
        else if(curr!=(nums[i]-1)){
            res=max(res,streak);
            curr=nums[i];
            streak=1;
        }

        
        }
        return max(res,streak);
    }
};
