class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n = nums.size();
        for(int i=0; i<n;i++)
            m[nums[i]]++;
        for(auto pr: m){
            if(pr.second>(n/2))
                return pr.first;
        }
        return 0;
    }
};