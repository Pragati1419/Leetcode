class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int>m;
        for(auto x :nums1)
          m[x]=1;
        vector<int>ans;
        for(auto x:nums2)
        {
            if(m[x]==1)
            {
                ans.push_back(x);
                m[x]=0;
            }
        }
        return ans;  
    }
};