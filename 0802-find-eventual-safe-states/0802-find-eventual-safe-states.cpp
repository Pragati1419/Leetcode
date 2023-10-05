class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>indegree(V);
        vector<vector<int>>adj(V);
        for(int i=0;i<V;i++){
        for(auto it : graph[i]){
            adj[it].push_back(i);
            indegree[i]++;
        }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        vector<bool>safe(V);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe[node]=1;
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }
         vector<int> safeNodes;
        for(int i = 0; i < V; i++) {
            if(safe[i]) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};