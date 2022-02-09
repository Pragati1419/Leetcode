class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          
         int leftsum=0;
        int rightsum=0;

         for(int number: nums) // Adding the rightsum
           rightsum = rightsum + number;
/* Traversing through whole array to find total sum and set the rightsum equals to itself
minus our current value at the position we are at. */

              for(int i=0;i<nums.size();i++)
              {  
                  rightsum = rightsum-nums[i];
                     if(leftsum==rightsum)
                     {
                         return i;  
                     }
                    
                     leftsum = leftsum + nums[i];
              
              }
        
        return -1;

    }
};