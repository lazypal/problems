/**
 * @rohit
 * */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int curMin = INT_MAX;
        int n = prices.size();
        int profit = 0;
        for(int i = 0; i < n; i++) {
            if(curMin > prices[i]) {
                curMin = prices[i];
            }
            profit = max(profit, prices[i] - curMin);
        }
        return profit;
        
    }
};