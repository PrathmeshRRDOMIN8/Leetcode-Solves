class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int m = ans.size();
        int counter=0;
        for(int i = 0;i<n; i++){
           if(nums[i]==target){
               ans.push_back(i);
               m++;
               break;
             }
        }
        for(int i = n-1; i>=0;i--){
            if(nums[i]==target){
               ans.push_back(i);
               m++;
               break;
             }
        }
        
        if(m==1){
            ans.push_back(ans[0]);
            m++;
        }
        while(m<2){
            ans.push_back(-1);
            m++;
        }
        
        return ans;
        
   }
};