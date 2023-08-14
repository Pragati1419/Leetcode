//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
          int count1=0;
        int count0=0;
        int var=0;
        for(int i=0;i<n;i++){
            if(a[i]==1) {
                count1++;
          if(count0>0)count0--;
            }
            if(a[i]==0){
                count0++;
               var=max(count0,var);
            }
        }
           return count1+var;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends