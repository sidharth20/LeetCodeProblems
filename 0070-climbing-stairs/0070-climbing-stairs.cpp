class Solution {
public:
    int climbStairs(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(2);
        if(n<=2) return ans[n];
        
        for(int i=3;i<=n;i++){
            ans.push_back(ans[i-1]+ans[i-2]);
        }
        return ans[n];
    }
};