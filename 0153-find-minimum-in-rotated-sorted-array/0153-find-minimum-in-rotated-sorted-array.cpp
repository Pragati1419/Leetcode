class Solution {
public:
    int findMin(vector<int>& nums) {
     int n = nums.size();
        if(n==1)
            return nums[0];
        int s=0;
        int e = n-1;
        int min = INT_MAX;
        if(nums[e]>nums[0])
                return nums[0];
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m]>nums[m+1])
                return nums[m+1];
            if(nums[m-1]>nums[m])
                return nums[m];
            if(nums[m]>nums[0])
                s=m+1;
            else
                e = m-1;
            
        }
        return min;
    }
};