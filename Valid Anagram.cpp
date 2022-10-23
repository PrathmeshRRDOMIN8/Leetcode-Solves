class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int> m;
        for(auto it: s){
            m[it]++;
        }
        
        for(auto it = t.begin(); it!=t.end(); it++){
            if(m.find(*it)==m.end())
                return false;
            else
                m[*it]--;
        }
        
        for(auto it: m){
            if(it.second<0)
                return false;
        }
        
        return true;
    }
};