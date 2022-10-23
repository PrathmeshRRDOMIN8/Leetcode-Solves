class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i<n; i++){
        if(nums[i]==0)
            count++;
    }
    vector<int> answer;
    for(int i=0;i<n;i++){
            if(nums[i]!=0)
                answer.push_back(nums[i]);
        }
        
    while(count!=0){
        answer.push_back(0);
        count-=1;
    }
    for(int i=0;i<n;i++)
        nums[i]=answer[i];
        
    
        
 }
};