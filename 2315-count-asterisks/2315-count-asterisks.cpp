class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length();
    if(n==0) return 0;
    int count=0;
    int ast=0;
    for(int i=0;i<n;i++){
        if(s[i]=='|'){
             ast++;
        }
        if(ast%2==0 && s[i]=='*'){
            count++;
                                        
        }
    }
    return count;
    }
};