class Solution {
public:
    int findMaxLength(vector<int>& nums) {
                
        int sum=0;
int n=nums.size();
unordered_map<int,int>mp;
int maxlen=0;
for(int i=0;i<n;i++){
sum+=nums[i]==0? -1: 1;
if(sum==0) maxlen=max(maxlen,i+1);
else if(mp.find(sum)!=mp.end()) maxlen=max(maxlen,i-mp[sum]);
else mp[sum]=i;
}
return maxlen;
        
    }

};