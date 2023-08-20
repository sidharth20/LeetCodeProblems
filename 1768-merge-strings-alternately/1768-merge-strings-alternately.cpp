class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size();
        int l2 = word2.size();
        
        int r1=l1,r2=l2;
        
        string ans;
        int i=0,j=0;
        while(i<l1 and j<l2 and r1 and r2){
            ans+=word1[i];
            i++;
            r1--;
            
            ans+=word2[j];
            j++;
            r2--;
        }
        
        while(i<l1 and r1){
            ans+=word1[i];
            i++;
            r1--;
        }
        
        while(j<l2 and r2){
            ans+=word2[j];
            j++;
            r2--;
        }
        
        return ans;
    }
};