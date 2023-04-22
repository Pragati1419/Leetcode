//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
    vector<pair<long long int,long long int>> v;

        unordered_map<int,long long int> vis;
        vector<long long int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            v.push_back({arr[i],i});

        }
        sort(v.begin(),v.end());
        long long int sum=v[0].first;
        for(int i=1;i<n;i++)
        {
            int k=v[i].first;
            if(v[i].first>v[i-1].first)
            {
                ans[v[i].second]=sum;
            }
            else if(vis.find(v[i].first)!=vis.end())
            {
                ans[v[i].second]=vis[v[i].first];
            }
            else
            {
                ans[v[i].second]=sum-v[i-1].first;
                vis[v[i].first]=sum-v[i-1].first;
            }
            
            sum+=k;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends