class Solution {
public:
bool isvalid(vector<vector<int>>a){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]>1){return false;}
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>row(9,vector<int>(9,0));
        vector<vector<int>>col(9,vector<int>(9,0));
        vector<vector<int>>grid(9,vector<int>(9,0));

        for(int i =0;i<9;i++){
            for (int j=0;j<9;j++){
                if(board[i][j]=='.'){continue;}
                int num=board[i][j]-'0';
                row[i][num-1]+=1;
              col[j][num-1]+=1;
              int g=3*(i/3)+j/3;
              grid[g][num-1]+=1;
            }
        }
     bool ans= ((isvalid(row)&&isvalid(col))&&isvalid(grid));
     return ans;
    }
};
