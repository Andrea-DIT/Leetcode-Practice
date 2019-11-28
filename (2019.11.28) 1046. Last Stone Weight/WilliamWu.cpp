class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
               
	std::sort(stones.begin(), stones.end(), std::greater<int>());
	while (stones.size() > 1)
	{
		int n1 = stones[0];
		int n2 = stones[1];
		stones.erase(stones.begin());
		stones.erase(stones.begin());

		int diff = n1 - n2;
        if(diff>0)
        {
		    stones.push_back(diff);
		    std::sort(stones.begin(), stones.end(), std::greater<int>());
        }
	}

	if (stones.size() == 0)
		return 0;
	else
		return stones[0];        
               
    }
};
