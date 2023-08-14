class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
      long long concatenationValue = 0;
    
    while (nums.size() > 1) {
        int first = nums[0];
        int last = nums[nums.size() - 1];
        
        long long concatenatedValue = stoll(to_string(first) + to_string(last));
        concatenationValue += concatenatedValue;
        
        nums.erase(nums.begin());
        nums.pop_back();
    }
    
    if (!nums.empty()) {
        concatenationValue += nums[0];
    }
    
    return concatenationValue;
    }
};