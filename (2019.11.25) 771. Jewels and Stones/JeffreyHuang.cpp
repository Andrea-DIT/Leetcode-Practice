class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char, char> myS;
        
        int output = 0;
        
        for (const auto &c : S)
        {
            myS[c] = isHasKey(myS, c) ? (myS[c] + 1) : 1;
        }
        
        for (const auto &c : J)
        {
            if (isHasKey(myS, c))
            {
                output += myS[c];
            }
            
        }
        
        return output;
    }
    
    bool isHasKey(const map<char, char> &table, const char &c)
    {
        return (table.find(c) == table.end()) ? false : true;
    }
};