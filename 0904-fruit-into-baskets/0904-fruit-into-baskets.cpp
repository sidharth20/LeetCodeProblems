class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        
        int left=0,right=0,res=0;
        
        while(right < fruits.size()){
            mp[fruits[right]]++;
            
            if(mp.size()<=2) res = max(res,right-left+1);
            else{
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0) mp.erase(fruits[left]);
                left++;
            }
            right++;
        }
        return res;
    }
};