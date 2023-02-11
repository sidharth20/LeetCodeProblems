class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        
        for(int i=1;i<numRows;i++){
            vector<int> tmp(i+1,0);
            tmp[0]=1;
            tmp[tmp.size()-1]=1;
            for(int j=1;j<tmp.size()-1;j++){
                tmp[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(tmp);
        }
        
        return ans;
    }
};