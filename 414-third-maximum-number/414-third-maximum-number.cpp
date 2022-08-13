class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]!=nums[i])
            {
                res++;
                if(res==3)
                    return nums[i-1];
            }
        }
        return nums[n-1];
        

    }
};