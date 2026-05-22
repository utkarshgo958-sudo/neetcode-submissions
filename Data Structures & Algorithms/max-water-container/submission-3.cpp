class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int m,ml;
        m=(r-l)*min(heights[l],heights[r]);
        while(l<r){
             ml=(r-l)*min(heights[l],heights[r]);
             if(heights[l]<heights[r]){
                l++;
             }
             else{r--;}
             m=max(m,ml);
        }
        return m;
    }
};
