class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int N = nums.size();
        int i = 1;
        while(i!=N){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
};