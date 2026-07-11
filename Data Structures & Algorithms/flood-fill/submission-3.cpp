class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<pair<int,int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>>q;
        int m=image[0].size();
        int n=image.size();
        vector<vector<int>>vis(n,vector<int>(m,0));
         int orig=image[sr][sc];
        if(orig==color){return image;}
        q.push({sr,sc});
        vis[sr][sc]=1;image[sr][sc]=color;
       
        while(!q.empty()){
      
        int length=q.size();
        for(int i=0;i<length;i++){
              auto curr=q.front();int r=curr.first;  int c=curr.second;q.pop();
        for(const auto&dir:directions){
            int row=r+dir.first;  int col=c+dir.second;
            if(row>=0 && row<image.size() && col>=0 && col<image[0].size()&& vis[row][col]==0 && image[row][col]==orig){
                vis[row][col]=1;image[row][col]=color;q.push({row,col});
            }
        }
        }
   
        }
        return image;
    }
};