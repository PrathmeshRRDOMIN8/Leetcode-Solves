class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int len = s[0].length(), n = s.size();
        for(int i=1; i<n; i++){
            int j = 0;
            while(j<s[i].length() && s[i][j]==s[0][j])
                j++;
            len = min(len, j);
        }
        return s[0].substr(0, len);
    }
};