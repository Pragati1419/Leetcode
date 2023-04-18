class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     int n = mat.size();
        int m = mat[0].size();
        int maxi = 0;
        int index = 0;
        
        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1) {
                    count++;
                }
            }
            
            if(count > maxi) {
                maxi = count;
                index = i;
            }
        }
        
        return {index, maxi};
        
    }
};