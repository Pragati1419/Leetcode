class Solution {
public:
    void sortColors(vector<int>& nums) {
      int count =1;
        int n =nums.size();
        while(count<n)
        {
            for(int i =0;i<n-count;i++)
            {
                if(nums[i]>nums[i+1])
                {

                    swap(nums[i],nums[i+1]);
                }
            }
            count++;
        }
    }
};