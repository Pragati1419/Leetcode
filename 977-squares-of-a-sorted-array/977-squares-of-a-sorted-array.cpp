class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
       for(auto &it:nums){
            it*=it;  
            
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};