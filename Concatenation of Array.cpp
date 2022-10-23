class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int count = 1;
        for(int i = 0; i<n; i++)
        {
            ans.push_back(nums[i]);
            if(i==n-1){
                i=-1;
                count--;
            }
          if(count<0)
              break;
        }
        return ans;
    }
};