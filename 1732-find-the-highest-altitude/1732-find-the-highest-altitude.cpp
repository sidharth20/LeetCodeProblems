class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest=0;
        int cur=0;
        for(int i=0;i<gain.size();i++){
            cur+=gain[i];
            highest=max(highest,cur);
        }
        
        return highest;
    }
};