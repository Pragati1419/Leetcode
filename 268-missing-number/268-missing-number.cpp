class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size()*(nums.size()+1)/2;
        for(int i=0; i<nums.size(); i++)
        {
            a-=nums[i];
        }
        return a;
    }
};