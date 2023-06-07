class Solution {
public:
    long long Fun(int n, int r){
        long long ans = 1;
        for(int i=1; i<=r; i++){
            ans*=n;
            ans/=i;
            n--;
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
         int n = rowIndex+1;
        vector<int> row(n);
        for(int i=0; i<n; i++){
            row[i] = (Fun(rowIndex, i));
        }
        return row;  
    }
};