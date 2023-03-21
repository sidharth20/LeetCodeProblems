#include<bits/stdc++.h>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int tmp1=st.top();
                st.pop();
                int tmp2=st.top();
                st.push(tmp1);
                st.push(tmp1+tmp2);
            }
            else if(operations[i]=="D"){
                int tmp3=2*st.top();
                st.push(tmp3);
            }
            else if(operations[i]=="C") st.pop();
            else st.push(stoi(operations[i]));
        }
        
        int ans=0;
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        
        return ans;
    }
};