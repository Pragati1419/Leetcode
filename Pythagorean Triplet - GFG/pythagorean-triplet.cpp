//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code 
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            for(int k=0; k<n; k++)
	            {
                    if((arr[i]*arr[i]) + (arr[j]*arr[j]) - (arr[k]*arr[k]) == 0)
                        return true;
                    else if((arr[j]*arr[j]) + (arr[k]*arr[k]) - (arr[i]*arr[i]) == 0)
                        return true;
                    else if((arr[i]*arr[i]) - (arr[j]*arr[j]) + (arr[k]*arr[k]) == 0)
                        return true;
	            }
	        }
	    }
	    return false;

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends