class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        
        for(int i=0; i<s.size(); i++){
            m1[s[i]] =i+1;
            m2[t[i]]=i+1;
        }
        
        for(int i=0; i<s.size(); i++){
            if(m1[s[i]]!= m2[t[i]]) 
                return false;
        }
        
        return true;
 
    }
};