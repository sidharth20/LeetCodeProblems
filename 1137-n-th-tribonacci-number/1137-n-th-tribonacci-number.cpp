class Solution {
public:
    int tribonacci(int n) {
        vector<int> v;
        
        v.push_back(0);v.push_back(1);v.push_back(1);
        int i=3;
        while(i<=n){
            v.push_back(v[i-1]+v[i-2]+v[i-3]);
            i++;
        }
        
        return v[n];
    }
};