class Solution {
public:
  vector<int>x{0,1,0,-1};
    vector<int>y{1,0,-1,0};
    bool ok=true;
    int sum=0;
    int dfs(vector<vector<int>>& grid,int i,int j ,int n,int m){
      if(i<0 or i>=n or j<0 or j>=m or grid[i][j]!=1)
          return 0;
      if(i==0 or i==n-1 or j==0 or j==m-1)
          ok=false;
      grid[i][j]=0;
      sum++;
      for(int k=0;k<4;k++){
        int xdir=i+x[k];
        int ydir=j+y[k];
        dfs(grid,xdir,ydir,n,m);
      }return sum;
    }
        
    int numEnclaves(vector<vector<int>>& grid) {
       int ans=0;
        int n=grid.size();
        int m=grid[0].size();
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          sum=0;
          ok=true;
          if(grid[i][j]==1){
            dfs(grid,i,j,n,m);
            if(ok)
            ans+=sum;
          }
        }
      }return ans;  
    }
};