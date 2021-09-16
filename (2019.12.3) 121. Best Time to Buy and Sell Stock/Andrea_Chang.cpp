class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        
        int anchor = 0;
        int max_profit = 0;
        int tmp_profit = 0;
        
        for (int i=0; i<prices.size(); ++i) {
            if ( (i+1) > (prices.size()-1) ) break;
            
            if ( prices[i+1] <= prices[anchor] ) {
                anchor = i+1;
                
            } else {
                tmp_profit = prices[i+1]-prices[anchor];
                if (tmp_profit > max_profit)
                    max_profit = tmp_profit;
            }
        }
        
        return max_profit;
    }
};
