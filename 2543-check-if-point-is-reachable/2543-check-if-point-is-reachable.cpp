class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        int x=targetX;
        int y=targetY;
        while(x>1 && y>1){
            while(x%2==0){
                x/=2;
            }
            while(y%2==0){
                y/=2;
            }
            while(x>=1 && y>=1){
                if(x>y){
                    x-=y;
                }else if(x<y){
                    y-=x;
                }else{
                    if(x==1 && y==1)
                    return true;
                    else{
                        return false;
                    }
                }
            }
        }
        return false;

    }
};