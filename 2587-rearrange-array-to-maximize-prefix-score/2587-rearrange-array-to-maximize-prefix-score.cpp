class Solution {
public:
    int maxScore(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
        int count=0;
        long long sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            if(sum>0)
                count++;
        }
        return count;
    }
};