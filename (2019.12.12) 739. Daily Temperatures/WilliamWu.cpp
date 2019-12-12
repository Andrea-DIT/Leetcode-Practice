class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        

        vector<int> ans(T.size(), 0);
        map<int, int> list;
        
        for(int i = T.size()-1; i >=0 ; i--)
        {         
            for (map<int,int>::iterator iter=list.begin(); iter!=list.end(); iter++)
            {
                if(iter->first > T[i])
                {
                    if(ans[i] == 0 || ans[i] > (iter->second - i) )
                    {
                        ans[i] = iter->second - i;
                        cout << i << ": " << ans[i] << endl;
                    }
                }
            }
            
            if(list.find(T[i])!=list.end())
                list[T[i]] = i;
            else
                list.insert(pair<int, int>(T[i], i));
        }
        
        return ans;

    }
};
