class Solution {
public:
    vector<int>generateRow(int rows){
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int col =1;col<rows;col++){
            ans=ans*(rows-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int rows=1;rows<=numRows;rows++){
            ans.push_back(generateRow(rows));
        }
        return ans;
    }
};