class Solution {
public:
    bool judgeSquareSum(int c) {
        
      long long int a=0;
        long long int b=sqrt(c);
    while(a<=b){
        if(a*a+b*b==c){
            return true;
        }
        else if(a*a+b*b<c){
            a++;
        }
        else{
            b--;
        }
    }
    return false;
        
    

    }
};