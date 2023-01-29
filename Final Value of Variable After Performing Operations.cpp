class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(auto it = operations.begin(); it!=operations.end(); it++){
            if(*it=="++X"|| *it=="X++")
              X++;
            if(*it=="--X"|| *it=="X--")
              X--;  
        }
        return X;
    }
};