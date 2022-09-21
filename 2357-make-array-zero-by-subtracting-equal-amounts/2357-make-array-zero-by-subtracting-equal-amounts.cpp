class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        /* Burute Force
        int n = nums.size();
         sort(nums.begin(), nums.end()); 
        int count=0;
        for(int i=0;i<n;i++){
           if(nums[i] > 0) 
            {
                int x = nums[i];
                count++;
                for(int j=i; j<nums.size(); j++) 
                {
                    nums[j] = nums[j]-x;
                }

            }
        }
        return count;
        
        */
        
        //optimization using set
        
         unordered_set<int>s;
        for(auto it :nums)
            if(it!=0)
                s.insert(it);
        return s.size();
    }
};