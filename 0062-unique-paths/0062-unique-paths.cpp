class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp( m , vector<int> (n));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0){
                    dp[i][j]=1;//1 path to lead to the starting point.
                    continue;
                }
                
                if(j>0 && i==0){
                  dp[0][j]=dp[0][j-1];
                continue;
                }
                if(i>0 && j==0 ){
                    dp[i][0]=dp[i-1][0];
                    continue;
                }
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
};