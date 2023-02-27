class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxk=0;
        for(int i=0;i<piles.size();i++){
            maxk=max(maxk,piles[i]);
        }
        
        int left=1,right=maxk;
        while(left<right){
            int m=(left+right)/2, total=0;
            
            for(int p : piles){
                total+= (p+m-1)/m;
            }
            if(total>h) left=m+1;
            else right=m;
        }
        return left;
    }
};
