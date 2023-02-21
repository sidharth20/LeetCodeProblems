class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        //int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int operand2=st.top();
                st.pop();
                int operand1=st.top();
                st.pop();
                st.push(operand1 + operand2);
            }
            else if(tokens[i]=="-"){
                int operand2=st.top();
                st.pop();
                int operand1=st.top();
                st.pop();
                st.push(operand1 - operand2);
            }
            else if(tokens[i]=="*"){
                int operand2=st.top();
                st.pop();
                int operand1=st.top();
                st.pop();
                st.push(operand1 * operand2);
            }
            else if(tokens[i]=="/"){
                int operand2=st.top();
                st.pop();
                int operand1=st.top();
                st.pop();
                st.push(operand1 / operand2);
            }
            else st.push(stoi(tokens[i]));
        }
        
        return st.top();
    }
};