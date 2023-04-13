class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        vector<int> curr;
        helper(candidates,target,0,0,curr);
        
        return ans;
    }
    
    void helper(vector<int>& candidates,int target,int index,int sum, vector<int>&curr){
        if(sum>target){
            return;
        }
        if(sum==target){
            ans.push_back(curr);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            
            helper(candidates,target,i,sum+candidates[i],curr);
            
            curr.pop_back();
        }
    }
};