class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,pair<int,int>> Mapp;
        for(auto it : nums1){
            Mapp[it].first++;
        }
        for(auto it: nums2){
            Mapp[it].second++;
        }
        
        for(auto it: Mapp){
            if(it.second.first>0 && it.second.second>0){
                if(it.second.first == it.second.second){
                    while(it.second.first!=0){
                        ans.push_back(it.first);
                        it.second.first--;
                    }
                }
               if(it.second.first != it.second.second){
                   int count = 0;
                  it.second.first<it.second.second ? count = it.second.first : count = it.second.second;
                   while(count!=0){
                    ans.push_back(it.first);
                    count--;
                }
               }
            } 
        }
        return ans;
    }
};