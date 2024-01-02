class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1);
        vector<vector<int>>ans;
        for (int c : nums) {
          if (v[c] >= ans.size()) {
                ans.push_back({});
            }
        ans[v[c]].push_back(c);
            v[c]++;
        }
        
        return ans;
    }
};