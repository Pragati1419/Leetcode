//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int>res;
        int currency[]= {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int n= sizeof(currency)/sizeof(currency[0]);
        sort(currency, currency+n, greater<int>());
        int i=0;
        while(N>0 && i<n){

            if(currency[i]<=N){

                N = N-currency[i];
                res.push_back(currency[i]);
            }

            else 
            i++;
            
        }

        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends