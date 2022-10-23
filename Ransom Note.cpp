class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        
        for(auto it: magazine){
            m[it]++;
        }
        
        for(auto it = ransomNote.begin(); it!=ransomNote.end(); it++){
            if(m.find(*it)==m.end()){
                return false;
            }
            else{
                m[*it]--;
            }
            
            if (m[*it]<0){
                return false;
            }
            
        }
        
        return true;
    }
};