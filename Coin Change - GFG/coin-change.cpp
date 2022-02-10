// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {

        // code here.
        long long dp[n+1] = {0} ;
      dp[0] = 1 ;
     for(int j=0;j<m;j++)
    {
      for(int i=S[j];i<=n;i++)
      {
       dp[i] += dp[i-S[j]] ;
      }
    }
      return dp[n] ;

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends