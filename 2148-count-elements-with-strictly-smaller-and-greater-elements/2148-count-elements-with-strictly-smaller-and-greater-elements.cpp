class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maximum=nums[nums.size()-1];
        int minimum=nums[0];
        if(maximum==minimum)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==minimum || nums[i]==maximum)
                count++;
        }
        return n-count;
    }
};