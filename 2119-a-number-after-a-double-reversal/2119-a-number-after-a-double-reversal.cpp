class Solution {
public:
    bool isSameAfterReversals(int num) {
       // return num == 0 || num % 10;
        
        if(num!=0 && num%10==0)
            return false;
        else
            return true;
    }
};