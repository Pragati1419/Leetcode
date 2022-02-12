class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        while(numBottles>=numExchange){
            
            int n=numBottles/numExchange;
            count+=n;
            
            numBottles=n+(numBottles%numExchange);
            
        }
        
        return count;
    }
};