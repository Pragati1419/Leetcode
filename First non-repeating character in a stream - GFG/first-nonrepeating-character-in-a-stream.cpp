//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		     string s;
		    map<char, int> mp;
		    int i = 0, j = 0;
		    while(j < A.size())
		    {
		            mp[A[j]]++;
		            while(mp[A[i]] != 1 && i < j) i++;
		            if(mp[A[j]] != 1 && i == j) s+='#';
		            else s+=A[i];
		            j++;
		    }
		    return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends