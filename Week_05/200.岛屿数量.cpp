class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    search(grid,i,j);
                }
            }
        }
        return count;
    }

    void search(vector<vector<char>> &grid,int i,int j){
        if(inArea(i,j,grid.size(),grid[0].size())&&grid[i][j]=='1'){
            grid[i][j]='2';
            search(grid,i,j+1);
            search(grid,i,j-1);
            search(grid,i+1,j);
            search(grid,i-1,j);
        }
    }

    bool inArea(int i,int j,int row,int col){
        return (i>=0)&&(i<row)&&(j>=0)&&(j<col);
    }
};
