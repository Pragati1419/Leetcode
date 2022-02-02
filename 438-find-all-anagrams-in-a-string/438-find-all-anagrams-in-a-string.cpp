class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()) 
        return {};
    
    int n=p.length();
    
    // just comparing frequency
    // vp for counting frequency of all characters in p
    // vs for counting frequency of all characters in 'n' size window in s
    
    vector<int> ret,vp(26,0),vs(26,0);
    for(int i=0;i<n;i++)
    {
        vp[p[i]-'a']++;
        if(i<n-1)
            vs[s[i]-'a']++;
    }
    int i=n-1;
    while(i<s.length())
    {
        vs[s[i]-'a']++;     //adding the nth character in the window 
							//now thw size of out window is 'n'
        if(vp==vs)
            ret.push_back(i+1-n);
        i++;
        vs[s[i-n]-'a']--;  //removing the first character from window to make it 'n-1' size
    }
    return  ret;
    }
};