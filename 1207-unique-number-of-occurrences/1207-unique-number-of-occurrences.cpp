class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> mp, count;
        for(int i : arr) ++mp[i];
        for(auto m : mp)
            if(++count[m.second] > 1) 
                return false;
        return true;
    
    }
};