class Solution {
public:
    vector<int> countBits(int n) {
      
        vector<int> v(n+1,0);
        // O(nlogn) time:
        // for(int i=1;i<=n;i++){
        //     int count=0;
        //     int tmp=i;
        //     while(tmp){
        //         count+=(tmp&1);
        //         tmp=tmp>>1;
        //     }
        //     v[i]=count;
        // }
        
        //O(n) time- obersing the pattern of bits
        v[0]=0;
        for(int i=1;i<=n;i++){
            v[i] = v[i/2] + i%2;
        }
        
        
        return v;
    }
};