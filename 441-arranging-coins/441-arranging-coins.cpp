class Solution {
public:
    int arrangeCoins(int n) {
                
        if(n<=0)
            return 0;
        
        int rowCount=0;
        
        while(n>0){
            
            
            
            n=n-rowCount;
        
         
        if(n<0)
        {
            break;
        }
        
        rowCount++;
            
        }
        
        return rowCount-1;

        
    }
        

    
};