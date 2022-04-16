class Solution {
public:
    string reverseWords(string s) {
        string str="";
        stack<string>st; 
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
                if(str.length()>0) st.push(str);
                str="";
            }
        }
        if(str.length()>0) st.push(str);
        str="";
         str+=st.top();
            st.pop();
        while(!st.empty()){
            str+=" ";
            str+=st.top();
            st.pop();
        }
       return str; 
    }
};