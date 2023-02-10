class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size()-1, ans=0;
        while(s[l]==' ') l--;
        
        while(l>=0 && isalnum(s[l])){
            l--;
            ans++;
        }
        return ans;
    }
};