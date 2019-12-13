class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int max = T.back();
        stack<int> tmp;
        
        for(int i = T.size()-1; i>=0; i--)
        {
            if(T[i]>=max)
                tmp.push(0);
            else
            {
                for(int j = i+1; j < T.size(); j++)
                {
                    if(T[j]>T[i])
                    {
                        tmp.push(j-i);
                        break;
                    }
                }
            } 
            
            if(T[i]>max)
                max = T[i];
        }
        
        vector<int> ans;
        
        while(tmp.size()>0)
        {
            ans.push_back(tmp.top());
            tmp.pop();
        }
        
        return ans;
    }
};
