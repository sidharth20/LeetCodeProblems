class Solution {
private:
    int findmaxsat(vector<int>& satisfaction, vector<vector<int>>& memo, int index, int time){
        if(index==satisfaction.size()) return 0;// cooked all the dishes
        
        if(memo[index][time]!= -1) return memo[index][time];//dish satisfaction time already calculated
        
        return memo[index][time]= max(satisfaction[index]*time + findmaxsat(satisfaction,memo,index+1,time+1),                  findmaxsat(satisfaction,memo,index+1,time));
    }
    
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        
        vector<vector<int>> memo(n+1,vector<int> (n+1,-1));
                                 
        return findmaxsat(satisfaction,memo,0,1);
    }
};