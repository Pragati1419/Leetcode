class Solution {
public:
     void dfs(int i, int j, int n, vector<vector<int>>& grid, int parent) {
        if(i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != parent+1) return;
        
        int parentValue = grid[i][j];
        grid[i][j] = 0;
        dfs(i-2, j+1, n, grid, parentValue);
        dfs(i-1, j+2, n, grid, parentValue);
        dfs(i+1, j+2, n, grid, parentValue);
        dfs(i+2, j+1, n, grid, parentValue);
        dfs(i+2, j-1, n, grid, parentValue);
        dfs(i+1, j-2, n, grid, parentValue);
        dfs(i-1, j-2, n, grid, parentValue);
        dfs(i-2, j-1, n, grid, parentValue);
         
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
       int n = grid.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        dfs(0, 0, n, grid, -1);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] != 0) return false;
            }
        }
        return true;
 
    }
};