class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i = 0; i<n;i++)
            m[nums[i]]++;
        for(auto pr: m){
            if(pr.second==1)
                return pr.first;
        }
        return 0;
    }
};