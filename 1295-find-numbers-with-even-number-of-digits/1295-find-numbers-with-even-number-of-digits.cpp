class Solution {
public:
    int noDigits(int n){
        //base case
        if(n<10){
            return 1;
        }
        int smallNo=noDigits(n/10);
        return 1+smallNo;
    }

    int findNumbers(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            int temp = noDigits(nums[i]);
            if(temp%2==0)
                count++;
        }
        return count;
    }
};