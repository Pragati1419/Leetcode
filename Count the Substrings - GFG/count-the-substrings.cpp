//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int i=0;
        int count=0;
        
        while(i<S.length())
        {
            int j=i+1;
            int lower=0;
            int upper=0;
            
            if(S[i]>='A' && S[i]<='Z')
            {
                upper++;
            }
            else
            {
                lower++;
            }
            
            while(j<S.length())
            {
                if(S[j]>='A' && S[j]<='Z')
                {
                    upper++;
                }
                else
                {
                    lower++;
                }
                
                if(upper==lower)
                {
                    count++;
                }
                j++;
            }
            i++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends