class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //map for storing each course's prereq
        unordered_map<int,vector<int>> mp;
        
        for(int i=0;i<prerequisites.size();i++){
            mp[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        //set for storing visited cours status
        unordered_set<int> visited;
        
        for(int i=0;i<numCourses;i++){
            if(dfs(i,mp,visited)==false) return false;
        }
        return true;
    }
    
    bool dfs(int course, unordered_map<int,vector<int>>& mp, unordered_set<int>& visited){
        if(visited.find(course)!=visited.end()) return false;
        
        if(mp[course].empty()) return true;
        
        visited.insert(course); //storing currently visiting course in set
        for(int i=0;i<mp[course].size();i++){
            int prereq=mp[course][i];
            if(dfs(prereq,mp,visited)==false) return false;
        }
        mp[course].clear();
        visited.erase(course);
        
        return true;
    }
};