class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int result = 0;
        if(J=="" || S=="")
            return result;
        
        std::map<char, int> table;
        for(int i = 0; i < S.size(); i++)
            table[S[i]]++;
                 
        for(int j = 0; j < J.size(); j++)
            result += table[J[j]];
            
        return result;        
    }
};
