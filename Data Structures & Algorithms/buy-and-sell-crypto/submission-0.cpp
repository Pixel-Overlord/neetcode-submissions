class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, priceOfPurchase = prices[0];
        for (int i = 1; i<prices.size(); i++)
        {
            if (priceOfPurchase > prices[i])
            {
                priceOfPurchase = prices[i];
            }
            maxProfit = max(maxProfit, prices[i] - priceOfPurchase);
        }
        return maxProfit;
    }
};