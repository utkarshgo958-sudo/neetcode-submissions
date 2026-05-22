class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>set;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    set.push_back({i,j});
                }
            }
        }
        for(auto& pair:set){
            int first=pair[0];
            int second=pair[1];
            for(int i=0;i<rows;i++){
            matrix[i][second]=0;}
            for(int i=0;i<col;i++){
            matrix[first][i]=0;}

        }
    }
};
