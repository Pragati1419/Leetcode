class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n= nums.size();
        if(n<2)
            return n;
        int j=0;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[j]){
                // If elements at i & j not equal, increment j and copy 
                // nums[i] to nums[j] so as to concentrate all unique 
                // elements in ascending order at the initial indices of the vector
                j++;
                nums[j]=nums[i];
                
            }
        }
        // j location is the final indice of the 
        // unique element subarray at the beginning of nums vector
        return j+1; 
    }
};