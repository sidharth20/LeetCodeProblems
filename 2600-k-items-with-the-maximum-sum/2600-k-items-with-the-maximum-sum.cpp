class Solution {
public:
//     int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
//         vector<int> v;
//         for(int i=0;i<numOnes;i++) v.push_back(1);
//         for(int i=0;i<numZeros;i++) v.push_back(0);
//         for(int i=0;i<numNegOnes;i++) v.push_back(-1);
        
//         int ans=0;
//         for(int i=0;i<k;i++){
//             ans+=v[i];
//         }
        
//         return ans;
//     }
    
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    return min(k, numOnes) - max(0, k - numOnes - numZeros);
}
};


