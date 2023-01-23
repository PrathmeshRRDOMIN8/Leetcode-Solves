class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int n =columnTitle.length();
        for(int i = 0; i<n; i++){
            ans = ans*26 + (columnTitle[i]-64);
        }
        return ans;
    }
};