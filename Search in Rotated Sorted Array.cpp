class Solution {
public:
    int search(vector<int>& a, int key) {
        int low = 0;
        int high = a.size()-1;
        while(low<=high) {
            int mid = (low+high)/2;
            if(a[mid]==key)
                return mid;
            
            //left array sorted
            if(a[low]<=a[mid]){
                if(key>=a[low] && key<=a[mid])
                    high = mid-1;
                else
                    low = mid+1;
            }
            
            //right array sorted
            else{
                 if(key>=a[mid] && key<=a[high])
                     low = mid+1;
                 else
                     high = mid-1;
            }
        }
        return -1;
    }
};