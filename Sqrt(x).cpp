class Solution {
public:
    int mySqrt(int x) {
        for(int i=0; i<=x; i++){
            if(pow(i+1,2)>x && pow(i,2)<=x)
                return i;
        }
        return 0;
    }
};