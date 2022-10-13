class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
       /*sort(nums.begin(), nums.end());
        int i=1;
        while(i<n)
        {
            if(nums[i-1] != nums[i])
                return false;
            i = i+2;
        }
        return true;
        */
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int totalpairs=0;
        for(auto it : m){
            totalpairs+=it.second/2;
        }
        return (totalpairs==n/2);
    }
};