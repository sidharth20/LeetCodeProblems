// class Solution {
// public:
//     string longestPalindrome(string s) {
//         if(s.size()<=1) return s;
        
//         int min_left=0;
//         int max_right=s.size()-1;
//         int ans=1;
        
//         for(int i=0;i<s.size();i++){
//             int left=i;
//             int right=i;
            
//             while(right<max_right && s[right]==s[right+1]){
//               right++;   
//             }
            
//             i=right+1;
            
//             while(right<max_right and left>0 and s[right+1]==s[left-1]){
//                 right++;
//                 left--;
//             }
//             int len_palindrome = right-left+1;
            
//             if(len_palindrome>ans){
//                 min_left =left;
//                 ans=len_palindrome;
//             }
//         }
        
//         return s.substr(min_left,ans);
//     }
// };

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size()<=1) 
            return s;
        
        int min_left = 0;
        int max_right=s.size()-1;
        int ans=1;
        
        for(int i=0;i<s.size();){
            int left = i;
            int right = i;
            while(right<max_right && s[right]==s[right+1]){
                right++;
                
            }
            i=right+1;
            
            while(right<max_right && left>0 && s[right+1]==s[left-1]){
                right++;
                left--;
            }
            int len_palindrome = right-left+1;
            if(len_palindrome > ans){
                 min_left = left;
                 ans = len_palindrome;
            }
        }
        
        return s.substr(min_left,ans);
    }
};