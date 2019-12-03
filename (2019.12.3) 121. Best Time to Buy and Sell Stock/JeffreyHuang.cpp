class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
        {
            return 0;
        }
        
        int minPrice = prices[0], output = 0;
        
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else if (output < prices[i] - minPrice)
            {
                output = prices[i] - minPrice;
            }
        }
        
        return output;
    }
};