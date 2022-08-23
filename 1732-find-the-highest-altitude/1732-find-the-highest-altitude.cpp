class Solution {
public:
    int largestAltitude(vector<int>& gain) {
          int ans = 0,altitude  = 0;
        for (const int& n : gain)
            ans = max(ans, altitude  += n);
        return ans;
    }
};