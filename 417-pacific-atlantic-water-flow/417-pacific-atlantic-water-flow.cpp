class Solution {
public:
    void dfs(vector<vector<int>> &arr,int x,int y,int prev,vector<vector<bool>> &ocean){
    if(x<0 || x>=arr.size() || y<0 || y>=arr[0].size()){
        return;
    }
    if(ocean[x][y]){
        return;
    }
    if(arr[x][y]<prev){
        return;
    }
    ocean[x][y]=true;
    dfs(arr,x+1,y,arr[x][y],ocean);
    dfs(arr,x-1,y,arr[x][y],ocean);
    dfs(arr,x,y+1,arr[x][y],ocean);
    dfs(arr,x,y-1,arr[x][y],ocean);
}

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    vector<vector<int>> res;
    if(heights.size()==0){
        return res;
    }
    int n=heights.size();
    int m=heights[0].size();
    
    vector<vector<bool>>atlan(n,vector<bool>(m,false));
    vector<vector<bool>>pacifi(n,vector<bool>(m,false));
    
    for(int i=0;i<n;i++){
        dfs(heights,i,0,INT_MIN,pacifi);
        dfs(heights,i,m-1,INT_MIN,atlan);
    }
    
    for(int j=0;j<m;j++){
        dfs(heights,0,j,INT_MIN,pacifi);
        dfs(heights,n-1,j,INT_MIN,atlan);
    }        
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(atlan[i][j] &&pacifi[i][j]){
                res.push_back({i,j});
            }
        }
    }
    return res;

    }
};