class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<pair<int,int>,pair<int,int>> M;
        
        int n = nums.size();
        int count = 0;
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                M[make_pair(i,j)] = make_pair(nums[i], nums[j]);
            }
        }
        
        
        for(auto it : M){
            if(it.first.first < it.first.second && it.second.first == it.second.second)
                count++;
        }
        
        return count;
    
    }
};