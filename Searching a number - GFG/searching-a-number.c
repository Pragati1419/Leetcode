// { Driver Code Starts


#include <stdio.h>


 // } Driver Code Ends
//User function template for C++

int search(int arr[], int n, int k) {
	    // code here
	    int position = -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==k){
	            position=i;
	            return position+1;
	        }
	    }
	    return -1;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int n, i, k;
        scanf("%d%d",&n,&k);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        int ans = search(a, n, k);
        printf("%d\n",ans);
    }
    return 0;
}
  // } Driver Code Ends