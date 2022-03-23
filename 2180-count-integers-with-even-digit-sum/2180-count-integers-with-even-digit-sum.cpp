class Solution {
public:
    
    
    int sum(int n)
    {
        int ans=0;
        while(n>0)
        {
            ans=ans+n%10;
            n=n/10;
        }
        return ans;
    }

    
    int countEven(int num) {
       int count=0;
        for(int i=1;i<=num;i++)
        {
            if(sum(i)%2==0)
            {
                count++;
            }
        }
        return count;
 

    }
};