class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mp;
    
        
        for(int i=0;i<numbers.size();i++){
            if(mp.find(target-numbers[i])==mp.end()) mp[numbers[i]]=i;
            else return {mp[target-numbers[i]]+1,i+1};
        }
        return {-1,-1};
    }
};