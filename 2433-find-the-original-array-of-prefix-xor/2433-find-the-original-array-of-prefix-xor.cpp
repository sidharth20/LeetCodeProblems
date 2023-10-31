class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int prev = pref[0];
        ans.push_back(pref[0]);
        
        for(int i=1;i<pref.size();i++){
            int cur = prev^pref[i];
            ans.push_back(cur);
            prev = prev^cur;
        }
        return ans;
    }
};