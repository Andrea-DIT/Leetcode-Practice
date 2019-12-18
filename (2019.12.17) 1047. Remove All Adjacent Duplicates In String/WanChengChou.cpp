class Solution {
public:
    string removeDuplicates(string S)
    {
        if(S.length() == 0) return "";
        
        string result;
        
        for(int i=0; i<S.length(); i++)
        {
            if(result.size() > 0)
            {
                if(result.back() == S[i])
                {
                    result.pop_back();
                }
                else
                {
                    result.push_back(S[i]);
                }
            }
            else
            {
                result.push_back(S[i]);
            }
        }
        
        return result;
    }
};