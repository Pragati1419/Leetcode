//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
         if(A[0][0]==0)
           return -1;
        if(X==0 && Y==0)
           return 0;
        vector<vector<int>> dis(N,vector<int>(M,1e9));
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{0,0}});
        dis[0][0]=0;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int dist=it.first;
            int row=it.second.first;
            int col=it.second.second;
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<N && ncol>=0 && ncol<M && A[nrow][ncol]==1 && dist+1<dis[nrow][ncol])
                {
                    dis[nrow][ncol]=1+dist;
                    if(nrow==X && ncol==Y)
                    {
                        return dist+1;
                    }
                    q.push({dist+1,{nrow,ncol}});
                }
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends