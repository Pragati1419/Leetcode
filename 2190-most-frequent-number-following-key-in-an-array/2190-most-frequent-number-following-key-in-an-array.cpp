class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
       int n = nums.size();
       /*priority_queue<pair<int,int>> pq;
       int ans=0;
        unordered_map<int,int> m;
        for(int i =0;i<n-1;i++){
            if(nums[i]==key){
                m[nums[i+1]]++;
            }
        
        
        for(auto i : m){
            pq.push({i.second,i.first});
        }
         ans= pq.top().second;
        }
        return ans;
        */
         unordered_map<int,int> mp;
        for(int i=0;i<n-1;++i)
        {
            if(nums[i]==key)
           
               mp[nums[i+1]]++;
        }
       int ans=0,max=INT_MIN;
        for(auto i : mp)
        {
            if(max<i.second)
            {
                max=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};