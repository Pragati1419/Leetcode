class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
        int m = nums[n/2];
        return m;
    }
};