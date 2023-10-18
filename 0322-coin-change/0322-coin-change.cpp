class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount+1,amount+1);
        v[0]=0;
        
        for(int i=0;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0){
                    v[i] = min( v[i-coins[j]]+1 , v[i] );
                }
            }
        }
        if (v[amount] == amount + 1) {
            return -1;
        }
        return v[amount];
    }
};