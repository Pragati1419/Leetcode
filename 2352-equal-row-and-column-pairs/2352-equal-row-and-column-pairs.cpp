class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n = grid.size();
        for(int row=0;row<n;row++){
            for(int col = 0;col<n;col++){
                bool equal=true;
                for(int i=0;i<n;i++){
                    if(grid[row][i]!=grid[i][col]){
                        equal=false;
                        break;
                    }
                }
                if (equal) {
                   count += 1;
                }
                else {
                count += 0;
                }

            }
        }
        return count;
    }
};