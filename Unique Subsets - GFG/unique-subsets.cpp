//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    void fun(int ind , vector<int>&arr , vector<int>&ds ,vector<vector<int>>&ans ){
        ans.push_back(ds);
        for(int i =ind ; i< arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1])
            continue;
            ds.push_back(arr[i]);
            fun(i+1 , arr , ds, ans);
            ds.pop_back();
        }
    }
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<vector<int>>ans;
        vector<int>ds;
        sort(arr.begin(),arr.end());
        fun(0,arr,ds,ans);
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
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends