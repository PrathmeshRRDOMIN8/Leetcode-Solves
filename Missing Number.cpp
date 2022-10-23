class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        std::vector<int>::iterator it;
        for(int i = 0; i<=n;i++){
          it = std::find (nums.begin(), nums.end(), i);
            if(it == nums.end())
                return i;
        }
        return 0;
    }
};