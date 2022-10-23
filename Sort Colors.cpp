class Solution {
public:
    void sortColors(vector<int>& nums) {
       int k = nums[0];
        for(int i = 0; i<nums.size();i++){
            k = max(k,nums[i]);
        }
        
        int count[3] = {0};
        for(int i = 0; i<nums.size();i++){
            count[nums[i]]++;
        }
        
        for(int i = 1; i<= k; i++){
            count[i]+=count[i-1];
        }
        
        int output[nums.size()];
        for(int i = nums.size()-1; i>=0;i--){
            output[--count[nums[i]]] = nums[i];
        }
        
        for(int i = 0; i<nums.size(); i++){
            nums[i] = output[i];
        }
    }
};