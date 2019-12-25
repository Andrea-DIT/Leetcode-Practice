class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T)
    {
        vector<int> answer(T.size(), 0);
        stack<int> index_stack;
        
        index_stack.push(0);
        for(int i=1; i<T.size(); i++)
        {
            while(!index_stack.empty() && T[i] > T[index_stack.top()])
            {
                answer[index_stack.top()] = i - index_stack.top();
                index_stack.pop();
            }
            index_stack.push(i);
        }
        return answer;
    }
};