class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n=s.size();
        
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')i++;
            if(i==n) break;
            int j=i;
            while(j<n && s[j]!=' ')j++;
            
            cout<<s.substr(i,j-i)<<endl;
            st.push(s.substr(i,j-i));
            i=j;
            
        }
        string ans="";
        
        while(!st.empty()){
            ans+=st.top()+" ";
            st.pop();
        }
        
        return ans.substr(0,ans.size()-1);
        
    }
};