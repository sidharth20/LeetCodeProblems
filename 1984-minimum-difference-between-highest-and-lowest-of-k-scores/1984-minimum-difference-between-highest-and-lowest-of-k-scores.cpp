class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int min_dif=INT_MAX;
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-k+1;i++){
            min_dif = min(min_dif, nums[i+k-1]-nums[i]);
        }
        return min_dif;
    }
};