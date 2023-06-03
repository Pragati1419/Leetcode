//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string ans;
            int n=s.size();
            int i=n-1;
            while(i >= 0){
                if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                    ans.push_back(s[i]);
                    i--;
                }else{
                    string temp="";
                    while((s[i]-'0' >= 0) && (s[i]-'0' <= 9)){
                        temp.push_back(s[i]);
                        i--;
                    }
                    reverse(temp.begin(),temp.end());
                    
                    ans.append(temp);
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends