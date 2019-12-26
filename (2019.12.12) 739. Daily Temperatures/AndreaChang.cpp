class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        const int length = T.size();
        vector<int> days(length, 0);
        stack<int> undone;
        
        for (int i=0; i<length; ++i) {
            while ( !undone.empty() && T[undone.top()] < T[i] ) {
                days[undone.top()] = i-undone.top();
                undone.pop();
            }
            
            undone.push(i);
        }
        
        return days;
    }
};
