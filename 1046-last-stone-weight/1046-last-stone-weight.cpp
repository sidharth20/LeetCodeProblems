class Solution {
public:
    priority_queue<int> pq;
    int lastStoneWeight(vector<int>& stones) {
        for(int n: stones) pq.push(n);
        //if(pq.empty()) return 0;
        while(pq.size()>1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y-x>0) pq.push(y-x);
        }
        
        if(pq.empty()) return 0;
        else return pq.top();
    }
};