class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size() ;
        int count = 1 ,flag = 1;
        
        for (int i=1; i<n; i++)
        {
            if (nums[i-1]<=nums[i])
            {
                count++ ;
            }
        }
        
        for (int i=1; i<n; i++)
        {
            if (nums[i-1]>=nums[i])
            {
                flag++ ;
            }
        }
        
        
        if (count==n || flag==n)
            return true ;
        else 
            return false ;

    }
};

