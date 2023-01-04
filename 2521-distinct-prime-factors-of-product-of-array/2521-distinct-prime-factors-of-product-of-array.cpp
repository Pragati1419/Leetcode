class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
      map<int, int> factors;
    for (int num : nums) {
        for (int i = 2; i <= sqrt(num); i++) {
            while (num % i == 0) {
                factors[i]++;
                num /= i;
            }
        }
        if (num > 1) {
            factors[num]++;
        }
    }
    int count = 0;
    for (auto& [factor, frequency] : factors) {
        if (frequency > 0) {
            count++;
        }
    }
    return count;  
    }
};