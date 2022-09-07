class Solution {
public:
    int myAtoi(string s) {
      int n = 0;
        stringstream ss;
        ss <<s;
        ss >> n;
        return n;
  
    }
};