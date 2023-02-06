class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int it : nums) mp[it]++;
        
        vector<int> res;
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it=mp.begin(); it!=mp.end();it++){
            pq.push(make_pair(it->second,it->first));
            
            if(pq.size() > (int)mp.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};