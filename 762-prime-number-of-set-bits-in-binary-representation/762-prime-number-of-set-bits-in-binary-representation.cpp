class Solution {
public:
    int  SetBits(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int checkPrime(int n)
    {
        if(n<2)
            return 0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }

    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(checkPrime(SetBits(i)))
                ans++;
        }
        return ans;
   
        
    }
};