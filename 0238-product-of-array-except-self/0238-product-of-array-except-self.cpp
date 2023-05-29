class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
        vector<int> ans(n);
        ans[0] = 1; 
        for (int i=0; i<n-1; i++){
            ans[i+1] = ans[i] * nums[i];
        }
        int rightProduct=1;
        for(int i=n-1; i>=0; i--){
            ans[i] = rightProduct * ans[i];
            rightProduct = rightProduct * nums[i];
        }
            
        return ans;
    }
};