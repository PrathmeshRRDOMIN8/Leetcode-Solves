class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>positive;
        vector<int>negative;
        for(int i = 0; i<n; i++){
            if(nums[i]>0)
                positive.push_back(nums[i]);
            else
                negative.push_back(nums[i]);
        }
        nums.clear();
        int N = positive.size();
        for(int i = 0; i<N;i++){
            nums.push_back(positive[i]);
            nums.push_back(negative[i]);
        }
        return nums;
    }
};