class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>vis(n,false);int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                res++;
                dfs(i,isConnected,vis,n);
            }
        }
        return res;
    }
void dfs(int i,vector<vector<int>>&isConnected,vector<bool>&vis,int n){
    vis[i]=true;
    for(int nei=0;nei<n;nei++){
        if(!vis[nei] && isConnected[i][nei]==1 ){dfs(nei,isConnected,vis,n);}
    }
}

};