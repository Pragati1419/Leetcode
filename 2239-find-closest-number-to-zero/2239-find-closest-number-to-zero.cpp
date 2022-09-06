class Solution {
public:
    int mini=INT_MAX;
    int number=INT_MIN;
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(abs(nums[i])<mini)
            {   mini=abs(nums[i]);
                number=nums[i];
            }
            else if(abs(nums[i])==mini)
            {
                if(number<nums[i])
                    number=nums[i];
            }
        }
        return number;
        }
    
};