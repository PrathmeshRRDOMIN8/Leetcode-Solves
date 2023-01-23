class Solution {
public:
    
    int binarySearch(vector<int> V, int low, int high){
        if(low<=high){
            if(V[low]==V[low+1]&&V[high]==V[high-1]){
                low=low+2;
                high=high-2;
                return binarySearch(V,low,high);
            }
            else{
                if(V[low]!=V[low+1])
                return V[low];
                if(V[high]!=V[high-1])
                return V[high];
            }
        }
        return 0;
    }
    
    
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        if(n==1)
        return nums[0];
        if(n==2 && nums[0]==nums[1])
        return 0;
        int ans = binarySearch(nums,low,high);
        return ans;
    }
};