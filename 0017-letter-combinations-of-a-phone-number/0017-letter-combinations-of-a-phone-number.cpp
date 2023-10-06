class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        map<char,vector<char>> mp;
        
        mp['2']={'a','b','c'};
        mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};
        
        string cur="";
        
        dfs(digits,0,cur,ans,mp);
        
        return ans;
    }
    
private:
    void dfs(string digits,int idx, string& cur, vector<string>& ans,map<char,vector<char>>& mp){
        //if(idx>digits.size()) return;
        
        if(idx==digits.size()-1){
            for(int j=0;j<mp[digits[idx]].size();j++){
            cur.push_back(mp[digits[idx]][j]);
            cout<<cur;
            ans.push_back(cur);
            cur.pop_back();
            }
            return;
        }
        
        for(int j=0;j<mp[digits[idx]].size();j++){
            cur.push_back(mp[digits[idx]][j]);
            cout<<cur<<endl;
            dfs(digits,idx+1,cur,ans,mp);
            cur.pop_back();
        }
    }
};