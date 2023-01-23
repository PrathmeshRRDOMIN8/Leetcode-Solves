class Solution {
public:
    void solve(vector<int> ip, vector<int> op, set<vector<int>> &ans){
        if(ip.size()==0){
            sort(op.begin(),op.end());
            ans.insert(op);
            return;
        }
        vector<int> temp1 = op;
        vector<int> temp2 = op;
        temp2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,temp1,ans);
        solve(ip,temp2,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> op;
        solve(nums,op,ans);
        vector<vector<int>> fi(ans.begin(),ans.end());
        return fi;
    }
};