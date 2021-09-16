class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> s;
        if(stones.size() == 0) return 0;        
        for(auto i:stones){
            s.push(i);
        }
        
        while(s.size()>1){
            int h1 = s.top();
            s.pop();
            int h2 = s.top();
            s.pop();
            if (h1 != h2){
                s.push(h1-h2);
            }
        }
        
        return s.empty() ? 0 : s.top();
    }
};