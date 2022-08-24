class Solution {
public:
    bool checkPowersOfThree(int n) {
     bool ans=true;
        while(n!=0)
        {
            int rem=n%3;
            if(rem==2)
            {
                ans=false;
                break;
            }
            n=n/3;
        }
        
        return ans;   
    }
};