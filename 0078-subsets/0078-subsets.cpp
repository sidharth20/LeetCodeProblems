class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        helper(nums,0,temp);
        
        return ans;
    }
    
    void helper(vector<int>& nums,int index, vector<int> temp){
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }
        
        helper(nums,index+1,temp);
        
        temp.push_back(nums[index]);
        helper(nums,index+1,temp);
        
    }
};