class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // Observation is the answer is topological sort in DAG 
        //Topological Sort is based on the the DFS Traversal of graph 
        //Problem is How to represent problem in Graph 
        //4, [[1,0],[2,0],[3,1],[3,2]]
        // 0->1 2->0 1->3 2->3
        //  0->1
        //2     |
        //     3 
        
        // create graph 
        map<int,vector<int>> graph;
        for(int i=0;i<prerequisites.size();i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        /////////////////////////////// inDegree on Graoh nodes
        vector<int> inDegree(numCourses,0);
        for(auto i: graph){
            for(auto j : i.second){
                inDegree[j]++;
            }
        }
        // Sort and print 
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(inDegree[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto i:graph[temp]){
                inDegree[i]--;
                if(inDegree[i]==0){
                    q.push(i);
                }
            }
        }
        if(ans.size()!=numCourses) return {};
        return ans;
        
        
    }
    
};