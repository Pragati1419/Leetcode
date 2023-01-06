class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());
        int icecreame=0;
        for(int i=0;i<n;i++){
            if(icecreame<n && costs[icecreame]<=coins){
                coins-=costs[icecreame];
                icecreame+=1;
            }
        }
        return icecreame;
    }
};