class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
      if(n== 0)
          return -1;
        
       
        int totalsum = 0, leftsum = 0;
        
        for(int i : nums)
            totalsum += i;
        
        for(int i = 0; i < n; i++) {
            if(leftsum == (totalsum - nums[i]))
                return i;
            else {
                leftsum += nums[i];
                totalsum -= nums[i];
                
            }
        }
        
        return -1;  
    }
};