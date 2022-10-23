class Solution {
public:
    int firstUniqChar(string s) {
        int ans = 0;
    for(int i = 0; i<s.length(); i++){
        size_t found = s.find(s[i]);
        if (found != string::npos)
            ans = found;
        found = s.find(s[i], found+1);
        if (found != string::npos)
            ans = -1;
        else 
            return ans;
     }
        return ans;
    }
};