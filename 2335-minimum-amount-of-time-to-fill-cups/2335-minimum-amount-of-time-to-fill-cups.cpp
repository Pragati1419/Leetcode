class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum = amount[0]+amount[1]+amount[2];
        int maxValue = max(amount[0], max(amount[1], amount[2]));
        return max(maxValue, (sum+1)/2);
    }
};