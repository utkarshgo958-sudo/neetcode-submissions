class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>output;
        output.push_back(intervals[0]);
        for(auto& interval:intervals){
            int start=interval[0];
            int end=interval[1];
            int lastend=output.back()[1];
            if(start<=lastend){
             output.back()[1]=max(end,lastend);
            }
            else{
                output.push_back({start,end});
            }
        }
        return output;
    }
};
