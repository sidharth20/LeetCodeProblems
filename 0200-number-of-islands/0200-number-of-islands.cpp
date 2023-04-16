class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int island=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,row,col,i,j);
                    island++;
                }
            }
        }
        
        return island;
    }
private:
    void dfs(vector<vector<char>>& grid,int row,int col,int i,int j){
        //check edges
        if(i<0 || i>=row || j<0 || j>=col) return;
        
        //check already visited or water
        if(grid[i][j]=='2' || grid[i][j]=='0') return;
        
        //mark visited
        grid[i][j]='2';
        
        dfs(grid,row,col,i+1,j);
        dfs(grid,row,col,i-1,j);
        dfs(grid,row,col,i,j+1);
        dfs(grid,row,col,i,j-1);
    }
};