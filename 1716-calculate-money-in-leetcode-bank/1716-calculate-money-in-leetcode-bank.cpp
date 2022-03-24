class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
                int monday=1;
        
        int i=1;
        int j=1;
        int count=1;
        while(i<=n){
            sum+=j;
            j++;
            i++;
            
            if(count%7==0){
                monday++;
                j=monday;
                count=0;
            }
            count++;
            
        }
        return sum;

    }
};