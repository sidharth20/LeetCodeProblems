class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        long pre=1,suf=1,mod=12345;
        
        vector<vector<int>> ans(n,vector<int>(m,1));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = pre*ans[i][j] % mod;
                ans[n-i-1][m-j-1] = suf*ans[n-i-1][m-j-1] % mod;
                
                pre = pre*grid[i][j] %mod;
                suf = suf*grid[n-i-1][m-j-1] %mod;
            }
        }
        return ans;
    }
};