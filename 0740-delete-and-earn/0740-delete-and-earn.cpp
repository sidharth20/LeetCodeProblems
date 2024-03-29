class Solution {
public:
//     int deleteAndEarn(vector<int>& nums) {
//         map<int,int> mp;
//         int maxnum=0;
        
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int ans=0;
//         int l = nums.size();
        
//         cout<<nums[l-1];
//         vector<int> dp(nums[l-1]+1,0);
//         if(mp[1]) {
//             dp[1]=mp[1];
//             ans=max(ans,dp[1]);
//         }
//         for(int i=2;i<dp.size();i++){
//             if(mp[i]){
//                 dp[i]=max(dp[i-1],dp[i-2]+mp[i]*i);
//                 ans = max(ans,dp[i]);
//             } 
//             else dp[i]=dp[i-1];
//         }
//         return ans;
//     }
    
    int deleteAndEarn(vector<int>& nums) {
    int n = 10001;
    
	//take the total sum by each number
    vector<int> sum(n, 0);
    vector<int> dp(n, 0);
    
    for(auto num: nums){
        sum[num] += num;
    }
    
    dp[0] = 0;
    dp[1] = sum[1];
    //now apply the house robbing concept
    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
    }
    
    return dp[n-1];
}
};