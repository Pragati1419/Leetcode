class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int len = arr.size();
        int times = len / 4;
        for (int i = 0; i + times < len; i++) {
            if (arr[i] == arr[i + times])
                return arr[i];
        }
        return -1;

    }
};