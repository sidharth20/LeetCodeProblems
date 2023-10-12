class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size()) return false;
        
        map<char,int> mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        
        for(int j=0;j<ransomNote.size();j++){
            if(mp[ransomNote[j]]<=0) return false;
            mp[ransomNote[j]]--;
        }
        return true;
    }
};