class Solution {
public:
    int divide(int dividend, int divisor) {
    if(dividend==INT_MIN && divisor==-1) 
        return INT_MAX;
        else{
     long long int x=dividend/divisor;
        return  x;
        }    
    }
};