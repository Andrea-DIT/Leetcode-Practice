class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int max = T.back();
        vector<int> ans(T.size(), 0);
        
        for(int i = T.size()-1; i>=0; i--)
        {
            if(T[i]>=max)
                ans[i] = 0;
            else
            {
                for(int j = i+1; j < T.size(); j++)
                {
                    if(T[j]>T[i])
                    {
                        ans[i] = (j-i);
                        break;
                    }
                }
            } 
            
            if(T[i]>max)
                max = T[i];
        }
        
        return ans;
    }
};
