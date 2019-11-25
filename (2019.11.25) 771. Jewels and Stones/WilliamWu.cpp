class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int ans = 0;
        if(J=="" || S=="")
            ans;
                
        std::map<char, int> table;
        for(int i = 0; i < J.size(); i++)
            table.insert(table.begin(), std::pair<char,int>(J[i], 0));
        
        for(int j = 0; j < S.size(); j++)
        {
            std::map<char,int>::iterator iterator = table.find(S[j]);
            if (iterator != table.end())
                iterator->second++;
        }
        
        for(map<char, int>::iterator it = table.begin(); it!=table.end(); it++)
            ans+= it->second;
            
        return ans;        
    }
};
