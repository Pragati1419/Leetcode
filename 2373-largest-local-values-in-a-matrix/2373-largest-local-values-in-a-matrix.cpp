class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
         int n = grid.size();
        int max;
        vector<vector<int>> largest(n-2, vector<int>(n-2, 0));
        for(int b = 0; b < n-2; b++){
            for(int a = 0; a < n-2; a++){
                max = -1;
                for(int j = b; j < 3+b; j++){
                    for(int k = a; k < 3+a; k++){
                        if(max < grid[j][k])
                            max = grid[j][k];
                    }
                }
                largest[b][a] = max;    
            }
        }
        return largest;
    }
    
};