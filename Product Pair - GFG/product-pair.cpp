//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
        unordered_map <long long , int> unmap ; 
        for (int i = 0  ; i < n ; i++)
            unmap[arr[i]]++;
        
        for (int i = 0 ;  i < n ; i++)
        {
            if (arr[i] != 0 && x%arr[i] == 0 && 
                (unmap.find(x/arr[i]) != unmap.end() ))
                return true;
            if (arr[i] == 0 && x == 0)
                return true ;
        }
        return false;

    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends