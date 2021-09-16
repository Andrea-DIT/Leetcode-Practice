class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1)
            return *stones.begin();
            
        while(stones.size() > 1) {
            sort(stones.begin(), stones.end());
            // if equal erase both
            if( *(stones.end()-1) == *(stones.end()-2) ) {
                stones.erase(stones.end()-2, stones.end());
            // if not equal, store weight, and erase the last    
            } else {
                *(stones.end()-2) = *(stones.end()-1)-*(stones.end()-2);
                stones.erase(stones.end()-1, stones.end());
            }
        }
        // if no stone left, return 0
        if(stones.empty())
            return 0;
        // return the final weight
        return *stones.begin();
    }
};