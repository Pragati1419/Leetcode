//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
  const int mod= 1e9 + 7;
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	      int ans = 1;
        map<char,int>mp;
        for(int i= 0;i<s.size();i++){
            if( mp.find(s[i])!=mp.end()){
                int temp = ans;
                ans = ((ans*2)%mod-mp[s[i]]+mod)%mod;
                mp[s[i]]  =temp;
            }
            else{
                mp[s[i]] = ans;
                ans =( ans*2)%mod;
            }
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends