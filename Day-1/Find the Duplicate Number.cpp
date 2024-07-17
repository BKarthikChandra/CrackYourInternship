class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit;
        int max_profit = INT_MIN;
        for(int price : prices)
        {
            min_price = min(min_price,price);
            profit = price - min_price;
            max_profit = max(max_profit,profit);
        }
        return max_profit;
    }
};