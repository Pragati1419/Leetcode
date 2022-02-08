class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int index, left=0, right=nums.size()-1;
        while(left<=right){
            
            index=left+(right-left)/2;
            
            if(nums[index]==target)
                
                return index;
            
            if(target < nums[index])
                
                right = index-1;
            
            else left = index+1;
        }
        
        return -1;
    }
};