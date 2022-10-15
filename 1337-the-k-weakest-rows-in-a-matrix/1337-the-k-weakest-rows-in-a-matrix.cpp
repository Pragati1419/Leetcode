class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            int soldier = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    soldier += mat[i][j];
                }
                else{
                    break;
                } 
            }
            pq.push(make_pair(soldier,i));
        }
        
      
        
        while(k--){
            int x  = pq.top().second;
            pq.pop();
            ans.push_back(x);
        }
        return ans; 
    }
};