class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int count=0;
        for(auto & row : grid){
            for(auto & ele : row){
                if(ele<0){
                    count++;
                }
            }
        }
        return count;
    }
};