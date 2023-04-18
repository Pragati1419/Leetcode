class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
         if (n<3) return false;
        int count1=0,count2=0;
        for (int i=0;i<n-2;i++) {
            if (colors.substr(i,3)=="AAA")
                count1++;
            else if (colors.substr(i,3)=="BBB")
                count2++;
        }
        if (count1>count2) 
            return true;
        return false;
    }
};