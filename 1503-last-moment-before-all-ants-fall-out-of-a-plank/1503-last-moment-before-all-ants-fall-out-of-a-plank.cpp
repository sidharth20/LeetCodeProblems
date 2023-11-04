class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ll = left.size();
        int rl = right.size();
        int leftmax=INT_MIN,rightmin=INT_MAX;
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        
        if(ll>0) leftmax = max(left[ll-1],leftmax);
        
        if(rl>0) rightmin = min(right[0],rightmin);
        
        int ans= 0;
        ans = max(ans,leftmax);
        ans = max(ans, n-rightmin);
        
        return ans;
    }
};