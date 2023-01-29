class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(int i = 0; i<nums.size(); i++){
            cout<<nums[i]<<" ";
        }
        return nums.size();
    }
};