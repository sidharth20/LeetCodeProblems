class Solution {
public:
    bool allZeroes(vector<int>& vec) {
        for (int i = 0; i < 26; i++) {
            if(vec[i] != 0)
                return false;
        }
        return true;
    }
    
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        
        if(allZeroes(v) == false)
            return false;
        return true;
    }
};