class Solution {
public:
    bool helper(vector<int>& nums, int mid, int k){
        long long sum=0;
        for (int i = 0; i < mid - 1; i++)
      {
        sum += nums[i]; 
      }
        for (int i = 0, j = mid-1; j < nums.size(); j++, i++)
      {
        sum += nums[j]; 
        long long need = 1LL * nums[j] * mid; 
        if (need - sum <= k)return 1; 
        sum -= nums[i];
      }
        return 0;
    }
    
    
    int maxFrequency(vector<int>& nums, int k) {
        int left=1,right=nums.size(),mid,ans;
        sort(nums.begin(),nums.end());
        
        while(left<=right){
            mid=(left+right)>>1;
            
            if(helper(nums,mid,k)){
                ans=mid;
                left=mid+1;
            }
            else right=mid-1;
        }
        return ans;
    }
};