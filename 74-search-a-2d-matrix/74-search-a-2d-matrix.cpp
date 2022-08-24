class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start=0;
        int end = m-1;
        for(int i=0;i<n;i++){
           start=0;
            end=m-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(matrix[i][mid]==target) 
                    return true;
                if(matrix[i][mid]>target){
                    end--;
                }
                else start++;
            }
        }
        return false;

        }
    
};