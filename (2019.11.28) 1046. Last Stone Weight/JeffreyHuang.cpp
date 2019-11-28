class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> q(stones.begin(), stones.end());
        
        while (q.size() > 1)
        {
            auto tmp = q.top();
            q.pop();
            tmp -= q.top();
            q.pop();
            if (tmp != 0)
            {
                q.push(tmp);
            }
        }
        return q.empty() ? 0 : q.top();
          
    }
};