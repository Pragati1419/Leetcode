class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
       int maximum = *max_element(nums.begin(), nums.end());
        int minimum = *min_element(nums.begin(), nums.end());
        
        return max(0, (maximum-minimum-2*k));   
    }
};