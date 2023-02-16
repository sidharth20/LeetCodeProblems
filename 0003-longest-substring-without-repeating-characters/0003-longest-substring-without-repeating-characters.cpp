class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int maxl=0;
        map<char,int> mp;
        if(s.size()==0) return 0;
        
        while(j<s.size()){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                maxl= max(maxl,j-i+1);
            }
            else if(mp.size()<j-i+1){
                //duplicate elements in the sliding window
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
            return maxl;
    }
};


