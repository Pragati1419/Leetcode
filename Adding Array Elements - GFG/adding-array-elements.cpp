//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
       priority_queue<int,vector<int>,greater<int>>pq;
       int count=0;
       int sum=0;
       int a,b,c;
       for(int i=0;i<n;i++){
           pq.push(arr[i]);
           
       }
       for(int i=0;i<n;i++){
           sum+=arr[i];
       }
       if(sum<k)
       return -1;
           
        
        while(pq.top()<k){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            c=a+b;
            pq.push(a+b);
            count++;
        }

        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends