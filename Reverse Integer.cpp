class Solution {
public:
   long int reverse(long int x) {
     long int rev = 0;
      while(x!=0){
          int temp = x%10;
          rev= rev*10 + temp;
          x/=10;
      }
    if(rev>pow(2,31)-1 || rev<pow(-2,31))
            return 0;
        return rev;
  }
};