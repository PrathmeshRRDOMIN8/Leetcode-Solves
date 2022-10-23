class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       int n = arr.size();
       if(n==2)
           return true;
       sort(arr.begin(),arr.end());
       int a = arr[0];
       int index = 0;
       int commondiff = arr[1]-arr[0];
       while(index!=n){
           if(arr[index]!=(a+(index)*(commondiff))){
               return false;
           }
           index++;
       }
        return true;
    }
};