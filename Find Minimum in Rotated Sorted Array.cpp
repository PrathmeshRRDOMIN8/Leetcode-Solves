class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
       int low = 0;
        int high = n-1;
        int fa = nums[0];
        if (nums[high] >= nums[0]) {
            return nums[0];
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            if(nums[mid-1]>nums[mid])
                return nums[mid];
            if(nums[mid]>fa){
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return 0;
    }
};