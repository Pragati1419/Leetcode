class Solution {
public:
    string reverseStr(string s, int k) {
              int start =0, end = k,n = s.length();
        while(start<n)
        {
            int last = min(end,n);
            reverse(s.begin()+start,s.begin()+last);
            start = last+k;
            end = start+k;
        }
        
        return s;
  
    }
};