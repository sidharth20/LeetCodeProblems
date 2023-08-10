class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows=board.size();
        int col=board[0].size();
        
        //flipping zeroes on the edges
        for(int i=0;i<rows;i++){
            if(board[i][0]=='O') dfs(board,rows,col,i,0);
            
            if(board[i][col-1]=='O') dfs(board,rows,col,i,col-1);
        }
        
        for(int j=0;j<col;j++){
            if(board[0][j]=='O') dfs(board,rows,col,0,j);
            
            if(board[rows-1][j]=='O') dfs(board,rows,col,rows-1,j);
        }
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O') board[i][j]='X';
                
                if(board[i][j]=='#') board[i][j]='O';
                
            }
        }
    }
    
    void dfs(vector<vector<char>>& board, int rows, int col, int i, int j){
        if(i<0 || i>=rows || j<0 || j>=col || board[i][j]!='O') return;
        
        if( board[i][j]=='O') board[i][j]='#';
        
        dfs(board,rows,col,i+1,j);
        dfs(board,rows,col,i-1,j);
        dfs(board,rows,col,i,j+1);
        dfs(board,rows,col,i,j-1);
    }
};