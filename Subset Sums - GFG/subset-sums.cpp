//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void fun(int ind , int sum ,vector<int> &arr, int N  ,vector<int>&v){
    if(ind==N){
        v.push_back(sum);
        return;
    }
    fun(ind+1,sum+arr[ind], arr ,N,v);
    fun(ind+1 , sum ,arr,N ,v);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>v;
        fun(0 , 0 ,arr , N ,v);
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends