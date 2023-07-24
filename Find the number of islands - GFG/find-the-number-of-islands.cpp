//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid, int n, int m) {
        if (row >= 0 && row < n && col >= 0 && col < m && !vis[row][col] && grid[row][col] == '1') {
            vis[row][col] = 1;
            dfs(row - 1, col, vis, grid, n, m);
            dfs(row + 1, col, vis, grid, n, m);
            dfs(row, col - 1, vis, grid, n, m);
            dfs(row, col + 1, vis, grid, n, m);
            dfs(row-1,col-1,vis,grid,n,m);
            dfs(row+1,col-1,vis,grid,n,m);
            dfs(row+1,col+1,vis,grid,n,m);
            dfs(row-1,col+1,vis,grid,n,m);
        }
    }
  //Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
       int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    count++;
                    dfs(row, col, vis, grid, n, m);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends