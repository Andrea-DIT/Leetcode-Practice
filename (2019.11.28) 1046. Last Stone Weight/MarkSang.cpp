class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int NewWeight=0;
        while(stones.size()!=1){
            NewWeight=stones[(stones.size()-1)] -stones[(stones.size()-2)];
            stones.pop_back();
            stones.pop_back();
            if(NewWeight==0 && stones.size()!=0)
                continue;
            else if(NewWeight==0 && stones.size()==0)
                return NewWeight;
            else{
                auto it = std::upper_bound(stones.begin(), stones.end(), NewWeight);
                stones.insert(it, NewWeight);
            }
        }
        return stones[0];
    }
};