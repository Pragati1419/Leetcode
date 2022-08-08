class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
       
      
        unordered_map<long long,long long>mp;
        long long n=nums.size();
        long long goodpairs=0;
        long long total;
        for(int i=0;i<n;i++){
            goodpairs+=mp[i-nums[i]];
            mp[i-nums[i]]++;
        }
       total=((n*(n-1))/2)-goodpairs;
        return total;

             
            

    }
};