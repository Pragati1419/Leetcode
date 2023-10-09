class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
        int start=0,end=n-1,first=-1;
        vector<int> ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2; 
            if(nums[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target) 
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
        }
		int last=-1;
        start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
 
    }
};