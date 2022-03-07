class Solution {
public:
    int subtractProductAndSum(int n) {
                long long sum=0,product=1;
        while(n>0){
            sum=sum+(n%10);
            product=product*(n%10);
            n/=10;
        }
        return product-sum;

    }
};