class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        
        priority_queue<pair<int,int>>pq;
         unordered_map<int,int> m;
         vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto it:m)
        {
            pq.push({-1*it.second,it.first});
        }
        
        while(pq.size()>0)
        {
            int freq=pq.top().first;
            int ele=pq.top().second;
            for(int i=0;i<abs(freq);i++)
            {
                res.push_back(pq.top().second);
            }
            pq.pop();
        }
        return res;
        
    }
};