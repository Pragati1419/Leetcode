//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
              int temp[n], i=0;
   for(int j=0;j<n;j++)
       if(arr[j]<0)
       {
           temp[i]=arr[j];
           i++;
       }
       for(int j=0;j<n;j++)
       if(arr[j]>=0)
       {
           temp[i]=arr[j];
           i++;
       }
       for(int j=0;j<n;j++)
       arr[j]=temp[j];
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends