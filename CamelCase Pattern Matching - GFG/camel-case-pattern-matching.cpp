//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string>ans;
        for(int i=0;i<N;i++){
            string x=Dictionary[i];
            string p;
            for(int i=0;i<x.length();i++){
                if(x[i]>='A'&& x[i]<='Z'){
                    p+=x[i];
                }
                if(p==Pattern){
                    ans.push_back(x);
                    break;
                }
            }
        }
        if(ans.size()==0) return {"-1"};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends