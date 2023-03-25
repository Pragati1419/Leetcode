//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     void findCombination(int index,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for(int i = index; i< arr.size();i++)
    {
       if(i > index && arr[i] == arr[i-1])
       continue;

       if(arr[i] > target)
       break;

       ds.push_back(arr[i]);
       findCombination(i+1,target-arr[i],arr,ans,ds);
       ds.pop_back();
    }

    return;
}
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates ,ans,ds);
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends