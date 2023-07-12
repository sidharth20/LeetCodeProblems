// class Solution {
// public:
//     int maxDistance(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> dp( n, vector<int> (m,INT_MAX-n*m)); 
//         int maxd=INT_MIN;
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
//                 if(grid[i][j]){
//                     dp[i][j]=0;
//                 } 
//                 else{
//                     if(i>0){
//                         dp[i][j]= min(dp[i][j], dp[i-1][j]+1);
//                     }
//                     if(j>0){
//                         dp[i][j]= min(dp[i][j], dp[i][j-1]+1);
//                     }
//                 }
//             }
//         }
//         for(int i=n-1;i>=0;i--){
//             for(int j=m-1;j>=0;j--){
//                 if(i<n-1){
//                     dp[i][j]= min(dp[i][j],dp[i+1][j]+1);
//                 }
//                 if(j<n-1){
//                     dp[i][j]= min(dp[i][j],dp[i][j+1]+1);
//                 }
//                 maxd= max(dp[i][j],maxd);
//             }
//         }
//         if (maxd <= 0 || maxd > n*m) {
//             return -1;
//         }
//         return maxd;
//     }
// };
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int N = grid.size(), M = grid[0].size();
        vector<vector<int>> dist(N, vector<int>(M, INT_MAX - N * M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 1) {
                    dist[i][j] = 0;
                } else {
                    if (i > 0) {
                        dist[i][j] = min(dist[i][j], dist[i-1][j]+1);
                    }
                    if (j > 0) {
                        dist[i][j] = min(dist[i][j], dist[i][j-1]+1);
                    }
                }
            }
        }
        int maxDist = INT_MIN;
        for (int i = N-1; i >= 0; i--) {
            for (int j = M-1; j >= 0; j--) {
                if (i < N-1) {
                    dist[i][j] = min(dist[i][j], dist[i+1][j]+1);
                }
                if (j < N-1) {
                    dist[i][j] = min(dist[i][j], dist[i][j+1]+1);
                }
                maxDist = max(maxDist, dist[i][j]);
            }
        }
        if (maxDist <= 0 || maxDist > N*M) {
            return -1;
        }
        return maxDist;
    }
};