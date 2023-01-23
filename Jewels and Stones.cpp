class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        int ans = 0;
        int n = jewels.length();
        int k = stones.length();
        for(int i = 0; i<n; i++){
            m[jewels[i]]++;
        }
        for(int j = 0; j<k; j++){
            if(m[stones[j]]>0)
            ans++;
        }
        return ans;
    }
};