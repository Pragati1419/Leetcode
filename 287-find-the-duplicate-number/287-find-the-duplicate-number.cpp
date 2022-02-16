class Solution {
public:
    int findDuplicate(vector<int>& nums) {
               int n = nums.size();
        
        int i = 0;
        
        while(i < n) {
            int index = nums[i] - 1;
            if(nums[i] != nums[index]) {
                swap(nums[i], nums[index]);
            } else {
                i++;
            }
        }
        
        return nums[n -1];
 
    }
};