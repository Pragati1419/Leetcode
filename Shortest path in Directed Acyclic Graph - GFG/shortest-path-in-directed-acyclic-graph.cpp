//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
         vector<int>dist(N,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>,  greater<pair<int,int>>>pq;
        
        dist[0]=0;
        
        vector<vector<int>> adj[N];
        
        for(auto e : edges){
            adj[e[0]].push_back( {e[1], e[2]} );
        }
        
        
        pq.push({dist[0],0});  //{dist[node],node} , here src/node=0;
        
        while(!pq.empty()){
            auto front=pq.top();
            pq.pop();
            
            int node=front.second;
            int dis=front.first;
            
            for(auto it:adj[node]){
                int weightNode=it[1];
                int adjNode=it[0];
                
                if(dis+weightNode<dist[adjNode]){
                    dist[adjNode]=dis+weightNode;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        for(auto &a : dist)
            if(a==INT_MAX)a = -1;
       
        
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends