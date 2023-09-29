class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            string& token = tokens[i];
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                if (token == "+")
                    st.push(n2 + n1);
                else if (token == "-")
                    st.push(n2 - n1);
                else if (token == "*")
                    st.push(n2 * n1);
                else
                    st.push(n2 / n1);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
