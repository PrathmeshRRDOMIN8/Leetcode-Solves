class Solution {
public:
    int getVal(char c){
        switch(c){
                case 'I': return 1;
                    break;
                case 'V': return 5;
                    break;
                case 'X': return 10;
                    break;
                case 'L': return 50;
                    break;
                case 'C': return 100;
                    break;
                case 'D': return 500;
                    break;
                case 'M': return 1000;
                    break;
                default: return 0;
                    break;
            }
    }
    
    int getRank(char c){
        switch(c){
                case 'I': return 1;
                    break;
                case 'V': return 2;
                    break;
                case 'X': return 3;
                    break;
                case 'L': return 4;
                    break;
                case 'C': return 5;
                    break;
                case 'D': return 6;
                    break;
                case 'M': return 7;
                    break;
                default: return 0;
                    break;
            }
    }
    
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i = n-1; i>=0; i--){
            if(getRank(s[i])>=getRank(s[i+1]))
                ans+=getVal(s[i]);
            else
                ans-=getVal(s[i]);
        }
        return ans;
    }
};