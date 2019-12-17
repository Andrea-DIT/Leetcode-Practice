class Solution {
public:
    string removeDuplicates(string S) {
        
        string ans;        
        for(int i = 0; i < S.length(); i++)
        {
            if(ans.size()>0 && ans.back()==S[i])
                ans.pop_back();
            else
                ans.push_back(S[i]);
        }
        
        return ans;
    }
};
