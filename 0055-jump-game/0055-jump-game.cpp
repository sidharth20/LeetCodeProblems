class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        
        if(nums.size()==1) return true;
        
        for(int i=nums.size()-1;i>=0;i--){
            // if(goal==0) return true;
            if(i+nums[i] >= goal) goal=i;
        }
         if(goal==0) return true;
        return false;
    }
};