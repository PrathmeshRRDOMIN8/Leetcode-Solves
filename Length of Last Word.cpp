class Solution {
public:
    int lengthOfLastWord(string s) {
       int count = 0;
       int size = s.length();
       for(int j = size-1; j>=0; j--){
           if(s[j]==' ' && count!=0){
               break;
           }
           else if(s[j]!=' '){
               count++;
           }
       }
       return count;
    }
};