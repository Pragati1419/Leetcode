class Solution {
public:
    bool isPossible(vector<int>& weights,int capacity,int days){
        int currWeight=0,NoOfDaysRequired=1;
        for(int i=0;i<weights.size();i++){
            if(currWeight+weights[i]<=capacity){
                currWeight+=weights[i];
            }
            else if(weights[i]<=capacity){
                NoOfDaysRequired++;
                currWeight=weights[i];
            }
            else{
                return false;
            }
        }
        return NoOfDaysRequired<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=accumulate(weights.begin(),weights.end(),0);
        int s=0,e=sum;
        int minimumNoOfDays=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPossible(weights,mid,days)){
                minimumNoOfDays=min(minimumNoOfDays,mid);
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return minimumNoOfDays;

    }
};