// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.

    int l = 0, r = n - 1;
 
    // Count of odd numbers
    int k = 0;
 
    while (l < r)
    {
     
        // Find first even number
        // from left side.
        while (arr[l] % 2 != 0)
        {
            l++;
            k++;
        }
 
        // Find first odd number
        // from right side.
        while (arr[r] % 2 == 0 && l < r)
            r--;
 
        // Swap even number present on left and odd
        // number right.
        if (l < r)
            swap(arr[l], arr[r]);
    }
 
    // Sort odd number in descending order
    sort(arr, arr + k, greater<int>());
 
    // Sort even number in ascending order
    sort(arr + k, arr + n);
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends