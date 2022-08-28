class Solution {
public:
   void dfs(int i, int j, int n, int m, vector<vector<int>>& image, int color, int target){
        if(i<0 || j<0 || i>=n || j>=m){
            return;
        }
        else if(image[i][j]!=target){
            return;
        }
        else if(image[i][j]==target){
            image[i][j]=color;
        }
        
        dfs(i+1,j,n,m,image,color,target);
        dfs(i-1,j,n,m,image,color,target);
        dfs(i,j+1,n,m,image,color,target);
        dfs(i,j-1,n,m,image,color,target);
        return;
   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int target = image[sr][sc];
        
        if(target!=color){
        dfs(sr,sc,n,m,image,color,target);
        }
        return image;

        
    }
};