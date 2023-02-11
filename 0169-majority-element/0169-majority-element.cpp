class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj,l=nums.size()/2;
        if(nums.size()==1 || nums.size()==2) return nums[0];
        
        sort(nums.begin(),nums.end());
        
        // if(nums[l]==nums[l-1]) return nums[l]
        
        return nums[l];
    }
};