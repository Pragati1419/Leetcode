//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int mod=1000000007;
      long long solve(int i,int n,vector<int>&dp){
        
        if( i > n) return 0;
        if( i == n) return 1;
        if( dp[i] != -1) return dp[i];
        long long ans1 = solve(i+1,n,dp)%mod;
        long long ans2 = solve(i+2,n,dp)%mod;
        long long ans3 = solve(i+3,n,dp)%mod;
        
        return dp[i] = (ans1 + ans2 + ans3)%mod;
    }
    long long countWays(int n)
    {
        
        // your code here
        vector<int> dp(n+1,-1);
        return solve(0,n,dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends