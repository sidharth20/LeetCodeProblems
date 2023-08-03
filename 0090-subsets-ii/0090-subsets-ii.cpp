class Solution {
public:
    set<vector<int>> st;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        
        helper(nums,0,temp);
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
    
    void helper(vector<int> nums, int index, vector<int> temp){
        if(index==nums.size()){
            st.insert(temp);
            return;
        }
        
        helper(nums,index+1,temp);
        temp.push_back(nums[index]);
        helper(nums,index+1,temp);
    }
};