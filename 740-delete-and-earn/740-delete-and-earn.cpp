class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
                map<int,int> mp;
        int n = nums.size();
        vector<int> dp(1e4+1);
        for(int i=0;i<n;i++) mp[nums[i]]++;
        dp[0]=0; dp[1]=1*mp[1];
        for(int i=2;i<=1e4;i++){
            dp[i]=max(dp[i-2]+(i*mp[i]),dp[i-1]);
        }
        return dp[1e4];

    }
};