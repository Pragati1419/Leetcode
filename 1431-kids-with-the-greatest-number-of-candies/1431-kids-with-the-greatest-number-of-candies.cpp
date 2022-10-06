class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> maxCandiesKids(n);
        int maxCandies = -1;
        for(int i : candies)
            maxCandies = max(maxCandies, i);
        
        for(int i = 0; i < n; i++) {
            if(candies[i] + extraCandies >= maxCandies)
                maxCandiesKids[i] = true;
        }
        return maxCandiesKids;
    }
};