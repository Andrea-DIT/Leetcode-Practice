class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        while(stones.size() > 1)
        {
            sort(stones.begin(), stones.end());
            vector<int>tmp(stones.begin(), stones.end() - 2);
            int diff = *(stones.end() - 1) - *(stones.end() - 2);
            if(diff != 0)
            {
                tmp.push_back(diff);
            }
            stones = tmp;
        }
        
        if(stones.size() == 1)
        {
            return stones[0];
        }
        else
        {
            return 0;
        }
    }
};