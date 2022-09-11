class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());   // sort the given array
        map<int, int> m;                  // take an hash map for storing the freq of each number
        
        for(int i=0; i<n; i++)
        {
            if( nums[i] % 2 == 0)         // storing only the even elements in the map
                m[nums[i]]++;
            
        }
        
        if(m.size() == 0)             
            return -1;
        
        // Take the first even element and its freq from the map
        auto it = m.begin();
        int ans = it->first;       
        int maxFreq = it->second;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                if(m[nums[i]] > maxFreq)       // if freq of any element is greater than the maxFreq then update ans and maxFreq
                {
                    maxFreq = m[nums[i]];
                    ans = nums[i];
                }
            }
        }
        
        return ans;
    }
};