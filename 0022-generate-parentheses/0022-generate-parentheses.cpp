class Solution {
    private:
    void recurse(vector<string> &ans,string s,int open,int close, int n){
        if(open==n and close==n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            recurse(ans,s+"(",open+1,close,n);
        }
        if(close<open){
            recurse(ans,s+")",open,close+1,n);
        }
    }
    
    public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=0,close=0;
        recurse(ans,"",open,close,n);
        
        return ans;
    }
};