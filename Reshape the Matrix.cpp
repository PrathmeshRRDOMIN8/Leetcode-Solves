class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> arr;
        vector<vector<int>> ans;
        if(n*m!=r*c)
            return mat;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                arr.push_back(mat[i][j]);
            }
        }
        
        
        for(int i = 0; i<r;i++){
            vector<int>row;
            for(int j = 0; j<c; j++){
                row.push_back(arr[0]);
                arr.erase(arr.begin());
            }
            ans.push_back(row);
        }
        
        return ans;    
    }
};