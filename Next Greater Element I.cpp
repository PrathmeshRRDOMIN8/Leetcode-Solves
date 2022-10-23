class Solution {
public:
    
    int findnext(vector<int> nums, int numFind){
        int N = nums.size();
        int j = 0;
        for(j = 0; j<N; j++){
            if(nums[j]==numFind)
                break;
        }
        if(j==N-1)
            return -1;
        for(int i = j; i<N; i++){
            if(nums[i]>numFind)
                return nums[i];
        }
        return -1;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        for(int i = 0; i<n; i++){
            int temp = findnext(nums2,nums1[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};