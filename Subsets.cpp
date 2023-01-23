class Solution {
public:
    void solve(vector<int>ip, vector<int> op, vector<vector<int>>&ans){
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        vector<int> temp1 = op;
        vector<int> temp2 = op;
        temp2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,temp1,ans);
        solve(ip,temp2,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(nums,op,ans);
        return ans;
    }
};