class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
      int m = grid[0].size();
      queue < pair < pair < int, int > , int >> q;
      int vis[n][m];
      int countFresh = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          // if cell contains rotten orange
          if (grid[i][j] == 2) {
            q.push({{i, j}, 0}); 
            // mark as visited
            vis[i][j] = 2;
          }
          
          else {
            vis[i][j] = 0;
          }
          // count fresh oranges
          if (grid[i][j] == 1) 
              countFresh++;
        }
      }

      int time = 0;
     
      int drow[] = {-1, 0, +1, 0};
      int dcol[] = {0, 1, 0, -1}; 
      int count = 0;
      while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        time = max(time, t);
        q.pop();
        for (int i = 0; i < 4; i++) {
          // neighbouring row and column
          int nrow = r + drow[i];
          int ncol = c + dcol[i];
        
          if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
            
             q.push({{nrow, ncol}, t + 1}); 

            vis[nrow][ncol] = 2;
            count++;
          }
        }
      }

      // if all oranges are not rotten
      if (count != countFresh)
          return -1;

      return time;

    
    }
};