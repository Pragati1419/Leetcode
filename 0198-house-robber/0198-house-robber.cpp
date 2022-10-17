class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i=2; i<n+1; i++){
            dp[i] = max(nums[i-1] + dp[i-2],dp[i-1]);
        }
        return dp[n];
        
      /*  int houserob(vector<int>& nums,int index){
        if(index>=nums.size())
            return 0;
        return max(nums[index]+houserob(nums,index+2),houserob(nums,index+1));
    }
    int rob(vector<int>& nums) {
        return houserob(nums,0);*/
    }
    
};