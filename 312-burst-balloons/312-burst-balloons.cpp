class Solution {
public:
    int maxCoins(vector<int>& nums) {
     int inputSize = nums.size();
        //memo[start][len] represents the optimal solution of totally len ballons indexed from start
        vector<vector<int>> memo;
        for (int i = 0; i < inputSize; i++) {
            memo.push_back(vector<int>(inputSize - i + 1, 0));
        }
        // the recurrence is memo[0][inputSize] = max(memo[0][p] + nums[p] + memo[p + 1][inputSize - p - 1])
        // which means, try to make every balloon as the last balloon to burst, then find the maximum output comes among them
        // for the above recurrence, p >= 1 and p <= inputSize-2
        // if p == 0, the result is nums[0] + memo[1][inputSize - 1]
        // if p == inputSize - 1, the result is memo[0][inputSize - 1] + nums[inputSize - 1]
        for (int len = 1; len <= inputSize; len++) {
            for (int start = 0; start <= inputSize - len; start++) {
                int endIndex = start + len - 1;
                int leftValue = 1;
                if (start > 0) {
                    leftValue = nums[start - 1];
                }
                int rightValue = 1;
                if (endIndex < inputSize - 1) {
                    rightValue = nums[endIndex + 1];
                }
                int maxValue = 0;
                for (int i = start; i <= endIndex; i++) {
                    int leftOptimal = 0;
                    if (i > start) {
                        leftOptimal = memo[start][i - start];
                    }
                    int rightOptimal = 0;
                    if (i < endIndex) {
                        rightOptimal = memo[i + 1][endIndex - i];
                    }
                    int output = leftOptimal + rightOptimal + leftValue * nums[i] * rightValue;
                    if (output > maxValue) {
                        maxValue = output;
                    }
                }
                memo[start][len] = maxValue;
            }
        }
        return memo[0][inputSize];   
    }
};