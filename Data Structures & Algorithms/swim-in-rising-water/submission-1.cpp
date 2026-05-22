class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int N=grid.size();
        set<pair<int,int>>visit;
        priority_queue<vector<int>,vector<vector<int>>,greater<>>minHeap;
        vector<vector<int>>directions={
            {0,1},{1,0},{0,-1},{-1,0}
        };
        minHeap.push({grid[0][0],0,0});
        visit.insert({0,0});
        while(!minHeap.empty()){
            auto curr=minHeap.top();
            minHeap.pop();
            int t=curr[0],r=curr[1],c=curr[2];
            if(r==N-1 && c==N-1){
                return t;
            }
            for(const auto & dir:directions){
                int neir=r+dir[0],neic=c+dir[1];
                if(neir<0||neic<0||neir==N||neic==N||visit.count({neir,neic})){
                    continue;
                }
                visit.insert({neir,neic});
                minHeap.push({max(t,grid[neir][neic]),neir,neic});
            }
        }
        
    }
};
