class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
    sort(s.begin(),s.end());
    for(int i=0;i<31;i++)
    {
        int n= pow(2,i);
        string s2 = to_string(n);
        sort(s2.begin(),s2.end());
        if(s2==s) return true;
    }
    return false;

    }
};