class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-2]) {
                nums.erase(nums.begin()+i-2);
                i--;
            }
        }
        return nums.size();

   
    }
};