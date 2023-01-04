class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        // Store the frequencies in the map.
        for (int task : tasks) {
            freq[task]++;
        }
        
        int minimumRounds = 0;
        // Iterate over the task's frequencies.
        for (auto [task, count] : freq) {
           
            if (count == 1) {
                return - 1;
            }

            if (count % 3 == 0) {
                minimumRounds += count / 3;
            } else {
                
                minimumRounds += count / 3 + 1;
            }
        }
        
        return minimumRounds;  
    }
};