class Solution {
public:
    bool isPalindrome(long int x) {
        long int real = x;
        if(x<0)
            return false;
        long int reverse = 0;
        while(x!=0){
            int temp = x%10;
            reverse = reverse*10 + temp;
            x/=10;
        }
        if(reverse==real)
            return true;
        else
            return false;
    }
};