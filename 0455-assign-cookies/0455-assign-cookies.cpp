class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int i=0;
        while(i<s.size() && count<g.size()){
            if(s[i]>=g[count])
            count++;
            i++;
        }
        return count;
        
    }
    
};