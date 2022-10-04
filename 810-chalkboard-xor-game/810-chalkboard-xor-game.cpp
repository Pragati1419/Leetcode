class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            res=res^nums[i];
        }
        if(res==0)
            return true;
        else
            return (n%2==0); 
    }
};