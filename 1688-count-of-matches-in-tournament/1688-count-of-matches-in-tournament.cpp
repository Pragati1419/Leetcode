class Solution {
public:
    int numberOfMatches(int n) {
       // return n-1;
        //burte force approach
         int count=0;
      while(n>1){
        
          count =count+(n/2);
          
        n=1+(n-1)/2;
        }
      
      return count;
    }
};