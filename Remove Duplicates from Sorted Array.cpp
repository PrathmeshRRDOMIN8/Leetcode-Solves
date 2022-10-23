class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> duplSep;
       for(int i=0; i<nums.size(); i++){
               duplSep.insert(nums[i]);      
       }
        set<int> :: iterator itr;
        nums.clear();
        for (itr = duplSep.begin(); itr != duplSep.end(); itr++)
                nums.push_back(*itr);
        return nums.size();
    }    
};