class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='*') st.pop();
            else st.push(s[i]);
        }
        
        vector<char> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        string ans="";
        
        for(int i=v.size()-1;i>=0;i--) ans+=v[i];
        
        return ans;
    }
};