class Solution {
public:
    priority_queue<int> pq;
    int findKthLargest(vector<int>& nums, int k) {
        for(int n : nums) pq.push(n);
        
        while(--k){
            pq.pop();
        }
        
        return pq.top();
    }
};