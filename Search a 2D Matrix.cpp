class Solution {
public:
    
    bool binarySearch(vector<int> V, int low, int high,int key){
        while(low<=high){
            int mid = (low+high)/2;
            if(V[mid]==key)
                return true;
            if(key>V[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
    
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int OL = 0;
        int OH = n-1;  
        while(OL<=OH){
            int OM = (OL+OH)/2;
            if(binarySearch(matrix[OM],0,m-1,target))
                return true;
            if(target>matrix[OM][0]){
                OL = OM+1;
            }
            else{
                OH = OM-1;
            }
        }
        return false;
    }
};