class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        for(int i=1;i<nums.size();i++){
            int diff=abs(nums[i] - nums[i - 1]);
            mini=min(mini,diff);
        }
        return mini;
    }
};