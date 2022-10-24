class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
         char ans=letters[0];
        
        if(letters[n-1]==target)
        {
            return ans;
        }
        for(int i=0;i<n;i++)
        {
            if(letters[i]==target)
            {
                ans=letters[i+1];
            }
            if(letters[i]>target)
            {
                ans=letters[i];
                break;
            }
        }
        return ans;
    }
};