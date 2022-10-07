class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int XOR = 0;

		if(nums2.size() & 1)
			for(int i = 0 ; i < nums1.size() ; i++)
			   XOR = XOR ^ nums1[i];

		if(nums1.size() & 1)
			for(int i = 0 ; i < nums2.size() ; i++)
			   XOR = XOR ^ nums2[i];

		return XOR;
    }
};