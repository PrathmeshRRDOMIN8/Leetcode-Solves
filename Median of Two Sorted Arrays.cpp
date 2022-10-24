class Solution {
public:
      int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                low = mid+1;
            else 
                high = mid-1;
        }
       if(target>nums[mid])
           return mid+1;
        else
            return mid;
    }
    
    double fmedian(vector<int> nums1, int n1){
        if(n1%2==0)
            return double(nums1[n1/2] + nums1[(n1/2)-1])/2;
        else
            return double(nums1[(n1-1)/2]);
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1==0)
            return fmedian(nums2,n2);
        else if(n2==0)
            return fmedian(nums1,n1);
        while(n2!=0){
            nums1.insert(nums1.begin() + searchInsert(nums1,nums2[n2-1]), nums2[n2-1]);
            n2--;
            n1++;
        }
        return fmedian(nums1,n1);
    }
};