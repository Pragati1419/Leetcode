//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        int ans=0;
        int res=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++) m[arr[i]]++;
        
        priority_queue<int,vector<int>,greater<int> >p;
        for(auto i:m) p.push(i.second);
        int x=p.top();
        
        for(int i=0;i<n;i++){
            if(m[arr[i]]==x){
                ans=arr[i];
                res=max(ans,res);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends