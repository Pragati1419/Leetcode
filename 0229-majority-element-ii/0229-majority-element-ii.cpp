class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size(); 
        vector<int> v;
    map<int, int> m;
    int mini = int(n / 3) + 1;
    for (int i = 0; i < n; i++) {
        m[nums[i]]++;
        if (m[nums[i]] == mini) {
            v.push_back(nums[i]);
        }
        if (v.size() == 2) break;
    }

    return v; 
    }
};