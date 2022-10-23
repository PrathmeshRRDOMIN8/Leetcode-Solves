class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int duplicate = 0;
        set<int> dupsep;
        for(auto it = nums.begin(); it!= nums.end(); it++){
            if(dupsep.find(*it)!=dupsep.end())
                duplicate++;
            else
                dupsep.insert(*it);
        }
        
        return duplicate>0;
    }
};