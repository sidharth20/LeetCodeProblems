class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr={};
        dfs(curr,ans,nums);
        return ans;
    }
private:
    void dfs(vector<int>& curr, vector<vector<int>>& ans, vector<int>& nums){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i:nums){
            if(find(curr.begin(),curr.end(),i)==curr.end()){
                curr.push_back(i);
                dfs(curr,ans,nums);
                curr.pop_back();
            }
        }
    }
};