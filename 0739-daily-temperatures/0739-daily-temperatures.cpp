class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     int n = temperatures.size();
        stack<int> st;// stack stores the indices of temperatures
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            while(!st.empty() and temperatures[st.top()]<temperatures[i]){
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};