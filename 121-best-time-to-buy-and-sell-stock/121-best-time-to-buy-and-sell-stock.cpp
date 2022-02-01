class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        int profit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            
            if(min_price > prices[i]){
                min_price = prices[i];
            }
            profit = prices[i] - min_price;
            
            if(max_profit < profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
};