class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int> count;
        int maxf=0;
        int window_size=0;
        for(int i=0;i<s.size();i++){
        count[s[i]]++;
        maxf=max(maxf,count[s[i]]);
        
        if(window_size-maxf < k) window_size++;
        else count[s[i-window_size]]--;
                            }
        return window_size;
    }
};