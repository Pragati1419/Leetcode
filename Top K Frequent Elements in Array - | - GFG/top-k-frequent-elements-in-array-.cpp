//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
               priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;
        unordered_map <int,int> mp;
        vector <int> res;
        
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
           pq.push({i->second, i->first});
            if(pq.size() > k)
                pq.pop();
        }
        
        while(pq.size() > 0)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends