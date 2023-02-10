class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxright, l=arr.size();
        maxright=arr[l-1];
        arr[l-1] = -1;
        
        if(l==1) return arr;
        
        for(int i=l-2;i>=0;i--){
            int tmp;
            tmp=arr[i];
            arr[i]=maxright;
            maxright=max(maxright,tmp);
            // arr[i]=maxright;
            // maxright=max(maxright,arr[i]);
        }
        return arr;
    }
};