// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code he
    
    int low = 0;
   int high = n-1;
   if(arr[high]==0){
       return -1;
   }
   else if(arr[low]==1){
       return 0;
   }
   while(low<=high){
       int mid = (low+high)/2;
       if(arr[mid]==0){
           low = mid + 1;
       }
       else{
           high = mid - 1;
       }
   }
   return low;

}