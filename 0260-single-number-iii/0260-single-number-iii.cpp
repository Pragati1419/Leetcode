class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      int n = nums.size(); 
        vector<int>v;
        for (int i = 0; i < nums.size(); i++) {
        bool foundDuplicate = false;

        for (int j = 0; j < nums.size(); j++) {
            if (i != j && nums[i] == nums[j]) {
                foundDuplicate = true;
                break;
            }
        }

        if (!foundDuplicate) {
            v.push_back(nums[i]);
        }
    }

    return v;
    }
};