class Solution {
public:    
    bool isSubsequence(string s, string t) {   
        int N = t.length();
        int M = s.length();
        if(M==0)
            return true;
        int i = N-1;
        while(i>=0){
           if(t[i]==s[M-1]){
              M--;
            }
            if(M==0)
                return true;
            i--;
        }
        return false;
    }
};