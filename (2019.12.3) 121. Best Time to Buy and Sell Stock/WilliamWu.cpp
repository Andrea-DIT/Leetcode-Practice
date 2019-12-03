class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()<=0)
            return 0;
        
        vector<int> local_min;
        int slope_previous = -1;
        int max_profit = 0;
        
        // step 1. find local min
        for(int i = 0; i < prices.size(); i++)
        {
            if(i < prices.size()-1)
            {
                int slope = prices[i+1] - prices[i];

                if(i!=0)
                {
                     if(slope > 0 && slope_previous <= 0)
                        local_min.push_back(prices[i]);
                }
                else
                {
                     if(slope>=0)
                        local_min.push_back(prices[i]);
                }

                slope_previous = slope;
            }
            
            for(int j = 0; j < local_min.size(); j++)
            {
                int diff = prices[i] - local_min[j];
                if(max_profit < diff)
                    max_profit = diff;
            }
        }

        return max_profit;
    }
};
