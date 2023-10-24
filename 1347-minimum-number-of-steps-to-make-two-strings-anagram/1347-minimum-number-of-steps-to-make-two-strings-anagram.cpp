class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v(26,0);
        
        for(auto i:s){
            v[i-'a']++;
        }
        
        for(auto j:t){
            v[j-'a']--;
        }
        
        int sum =0;
        for(int i=0;i<26;i++){
            sum+=abs(v[i]);
        }
        
        return sum/2;
    }
};