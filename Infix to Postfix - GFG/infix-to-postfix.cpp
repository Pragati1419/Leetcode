//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    bool Char(char c){
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            return true;
        }
        else
        return false;
    }
    
    int pre(char c){
        if(c=='+' || c=='-')
        return 1;
        else if(c=='*' || c=='/')
        return 2;
        else return 3;
    }
    string infixToPostfix(string s) {
        // Your code here
        int n = s.length();
        string ans="";
        stack<char>st;
        for(int i=0;i<n;i++){
            if(Char(s[i])){
                ans+=s[i];
            }
            else{
                if(s[i]=='('){
                st.push('(');
                }
                else if(s[i]==')')
                {
                    while(!st.empty() && st.top()!='(')
                    {
                        ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else
                {
                    if(st.empty() || st.top()=='(')
                    {
                        st.push(s[i]);
                    }
                    else
                    {
                        if(pre(st.top()) < pre(s[i]))
                        {
                            st.push(s[i]);
                        }
                        else
                        {
                            while(!st.empty() && st.top()!='(')
                            {
                                ans += st.top();
                                st.pop();
                            }
                            st.push(s[i]);
                        }    
                    }
                }
            }
        }
         
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;    
             
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends