class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
            int profit = prices[i] - min_price;
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};
