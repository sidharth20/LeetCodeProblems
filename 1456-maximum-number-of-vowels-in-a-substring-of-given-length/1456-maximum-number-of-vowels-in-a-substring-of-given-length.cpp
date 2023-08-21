class Solution {
public:
    int checkvowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u') return 1;
        return 0;
    }
    
    int maxVowels(string s, int k) {
        int res=0;
        for(int i=0;i<k;i++){
            res+=checkvowel(s[i]);
        }
        int number=res;
        for(int i=k;i<s.size();i++){
            res+= checkvowel(s[i])-checkvowel(s[i-k]);
            number=max(number,res);
        }

        return number;
    }
};