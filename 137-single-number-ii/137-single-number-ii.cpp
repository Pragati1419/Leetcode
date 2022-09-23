class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int oneTime =0;
        int twoTime =0;
        
        for(auto it: nums){
            oneTime = (oneTime^it) & (~twoTime);
            twoTime = (twoTime ^it) & (~oneTime);
        }
        return oneTime;

    }
};