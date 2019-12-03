class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0) return 0;
		int min_price = prices[0], max_profit = 0;

		for (int n = 0; n < prices.size(); n++){
			if (prices[n] < min_price){
				min_price = prices[n];
			}
			else if ((prices[n] - min_price) > max_profit){
				max_profit = (prices[n] - min_price);
			}
		}
		return max_profit;
	}
};