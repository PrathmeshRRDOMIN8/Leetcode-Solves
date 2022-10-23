class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 1;
        int max = 1;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        for(int i = 0; i<n-1; i++){
          if(nums[i+1] == nums[i]+1)
              count++;
          if(count>max)
              max=count;
          if(nums[i+1] != nums[i]+1){
              if(nums[i+1]==nums[i])
                  continue;
              else
                  count = 1;
          }    
        }
        return max;
    }
};