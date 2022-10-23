class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i = 0; i<n; i++)
            m[nums[i]]++;
        nums.clear();
        for(auto it: m){
            if(it.second>(int)(n/3)){
                nums.push_back(it.first);
            }   
        }
        
        return nums;
            
    }
};