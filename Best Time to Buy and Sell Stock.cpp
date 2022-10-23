class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
       int leastfornow = INT_MAX;
        int overallprofit = 0;
        int profitifselltoday = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < leastfornow){
                leastfornow = prices[i];
            }
            profitifselltoday = prices[i] - leastfornow;
            if(overallprofit < profitifselltoday){
                overallprofit = profitifselltoday;
            }
        }
        return overallprofit;
    }
};