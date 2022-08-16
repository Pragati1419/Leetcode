class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, 0);
        queue<int> q;
        
       
        
        for (int i = 0; i < V; i++) {
            if (color[i] != 0 ) 
                continue;
            q.push(i);
            color[i] = 1;
            
            while(!q.empty()) {
                int v = q.front();
                q.pop();
                
                for (auto u : graph[v]) {
                    if(!color[u]) {
                        q.push(u);
                        color[u] = -color[v];
                    
                    } else if (color[u] == color[v]) {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};