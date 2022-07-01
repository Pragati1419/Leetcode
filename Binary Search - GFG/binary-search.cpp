// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int min=0;
        int max=n-1;
        int mid=(min+max)/2;
        
        if(arr[mid]==k){
            return mid;
        }
        
        if(arr[mid]<k){
            
        for(int i=mid;i<=max;i++)
           {if(arr[i]==k)
           return i;}
       }
       if(arr[mid]>k)
       {for(int i=mid;i>=min;i--)
           {if(arr[i]==k)
           return i;
           }
       }
       return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends