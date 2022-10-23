class Solution {
public:
    
    int pivotIndex(vector<int>& nums) {
        int pivot = -1;
        map<int,pair<int,int>> M;
        int n = nums.size();
        int lsum = 0;
        int rsum = 0;
        for(int i=0; i<n;i++){
            M[i].first = lsum;
            lsum+=nums[i];
        }
        for(int i = n-1; i>=0; i--){
            M[i].second = rsum;
            rsum+=nums[i];
        }
        for(auto it: M){
            if(it.second.first == it.second.second)
                return it.first;
        }
        return pivot;
    }
};