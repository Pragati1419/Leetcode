class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
          unordered_map<long , long> m;
        long long sum=0;
        long long count=0;
        m[0]=1;
        for(auto x:nums)
        {
            sum=sum^x;
            count+=m[sum];
            m[sum]++;
        }
        return count;
    }
};