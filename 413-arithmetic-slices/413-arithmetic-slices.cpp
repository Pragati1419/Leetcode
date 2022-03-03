class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        	int n = nums.size();
	int diff = INT_MAX, x = 0, ans = 0;
	for (int i = 1; i < n; i++) {
		if (nums[i] - nums[i-1] == diff) {
			x++;
			if (x > 2) ans += x - 2;
		} else {
			diff = nums[i] - nums[i-1];
			x = 2;
		}
	}
	return ans;

    }
};