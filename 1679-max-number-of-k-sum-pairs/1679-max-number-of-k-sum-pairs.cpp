class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int operations=0;
       unordered_map<int , int>m;
        for(int num : nums){
            int sum = k - num;
        if (m.find(sum) != m.end() && m[sum] > 0) {
            operations++;
            m[sum]--;
        } else {
          m[num]++;
        }
            }

    return operations;
    }
};