class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(st.empty() and (s[i]==')' or s[i]=='}' or s[i]==']')) return false;
            else if( s[i]==')' and st.top()=='(') st.pop();
            else if( s[i]==']' and st.top()=='[') st.pop();
            else if( s[i]=='}' and st.top()=='{') st.pop();
            else st.push(s[i]);
        }
        
        if(st.empty()) return true;
        return false;
    }
};