class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       
              long long vol=(long long)(length)*(long long)( width)*(long long)( height);
        bool isBulky = (vol>=1e9 || (length>=1e4 || width>=1e4 || height>=1e4));
       bool isHeavy = mass >= 100;
  if (isBulky && isHeavy) {
    return "Both";
  } else if (isBulky) {
    return "Bulky";
  } else if (isHeavy) {
    return "Heavy";
  } else {
    return "Neither";
  }
      
          
    }
};