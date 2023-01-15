class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        
       long long n = nums.size();
        long long curr = 0;
        long long res = 0;
        unordered_map<long , long> cnt;
        long long j = 0;
        for (long long i = 0; i < n; i++) {
            if (cnt[nums[i]] > 0) {
                curr += cnt[nums[i]];
            }
            cnt[nums[i]]++;
            while (j <= i && curr >= k) {
                if (cnt[nums[j]] > 1) {
                    curr -= (cnt[nums[j]] - 1);
                }
                cnt[nums[j]]--;
                j++;
            }
            res += (i-j+ 1);
        }
        return (n * (n + 1) / 2) - res;
    }
};
