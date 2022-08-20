class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        vector<int>ans;
        while(i<n&&j<m){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }else{
                if(nums1[i]>nums2[j])
                    j++;
                else
                    i++;
            }
        }
        return ans;
 
    }
};