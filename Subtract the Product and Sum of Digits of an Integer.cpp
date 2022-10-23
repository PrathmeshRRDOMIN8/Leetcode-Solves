class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        
        int temp = n;
        while(temp>0){
            product*=temp%10;
            temp/=10;
        }
        temp = n;
        while(temp>0){
            sum += temp%10;
            temp/=10;
        }
        return product-sum;
    }
};