//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
int prime[100001];
    
    bool isPrime(int n)
    {
        if(n==1)return false;
        if(n==2 or n==3)return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        
        return true;
    }
    
    int count= 0;
    void precompute(){
        for(int i=2;i<=1000000;i++)
        {
            if(isPrime(i))
            {
                count++;
                prime[count]= i;
            }
        }
        prime[1]=-1;
    }

int bfs(int i, vector<vector<int>>& adj, vector<int>& vis, int ans) {
    queue<int> q;
    q.push(i);
    vis[i] = 1;

    while (!q.empty()) {
        int s = q.size();
        while (s != 0) {
            int f = q.front();
            q.pop();
            for (auto x : adj[f]) {
                if (vis[x] == -1) {
                    q.push(x);
                    vis[x] = 1;
                    ans++;
                }
            }
            s--;
        }
    }

    return ans + 1;
}

int helpSanta(int n, int m, vector<vector<int>>& adj) {
    
 

    int res = INT_MIN;
    vector<int> vis(n + 1, -1);

    for (int i = 1; i <= n; i++) {
        if (adj[i].empty()) continue;
        if (vis[i] == -1) {
            int ans = 0;
            
            res = max(res, bfs(i, adj, vis, ans));
        }
    }

    if (res == INT_MIN) return -1;
    return prime[res];

    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends