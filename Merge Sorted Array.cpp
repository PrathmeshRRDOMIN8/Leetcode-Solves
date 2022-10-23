class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int,int> Mapp;
        for(int i = 0; i<m; i++){
            Mapp[nums1[i]]++;
        }
        for(int j = 0; j<n; j++){
            Mapp[nums2[j]]++;
        }
        nums1.clear();
        int i = 0;
        for(auto it: Mapp){
            while(it.second!=0){
                nums1.push_back(it.first);
                it.second--;
            }
        }
            
    }
};