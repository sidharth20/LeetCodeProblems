class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        //l=buy,r=sell
        int maxprofit=0;
        
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                //profitable trade
                maxprofit=max(maxprofit,prices[r]-prices[l]);
            }
            else l=r;
            r++;
        }
        return maxprofit;
    }
};