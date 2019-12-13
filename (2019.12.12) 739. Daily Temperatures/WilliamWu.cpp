class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int max = 0;
        vector<int> ans(T.size(), 0);
        
        for(int i = T.size()-1; i>=0; i--)
        {
            if(T[i]>=max)
                ans[i] = 0;
            else
            {
                int j = i + 1;
                while(j < T.size())
                {
                    if(T[i]<T[j])
                    {
                        ans[i] = j-i;
                        break;
                    }
                    else
                        j = ans[j]+j;
                }
            } 
            
            if(T[i]>max)
                max = T[i];
        }
        
        return ans;
    }
};
