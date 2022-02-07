class Solution {
public:
    char findTheDifference(string s, string t) {
      char a=0;
        for(char z:s)
            a=a^z;
        for(char z:t)
            a=a^z;
        return a;
    }
  
    
};