class Solution {
public:
    bool digitCount(string num) {
        int n=num.length();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[num[i]-'0']++;
        }
        for(int i=0;i<n;i++){
            if(mp[i]!=num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};