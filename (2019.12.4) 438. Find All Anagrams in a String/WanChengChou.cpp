class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> indices;
        int sLength = s.length();
        int pLength = p.length();
        if(sLength == 0 || sLength < pLength)
        {
            return indices;
        }
        
        vector<int> pTable(26, 0);
        vector<int> windowTable(26, 0);
        for(int i=0; i<pLength; i++)
        {
            pTable[charToInt(p[i])]++;
        }
        
        for(int i=0; i<sLength; i++)
        {
            int preIndex = i - pLength;
            windowTable[charToInt(s[i])]++;
            if(i >= pLength)
            {
                windowTable[charToInt(s[preIndex])]--;
            }
            if(windowTable == pTable)
            {
                indices.push_back(preIndex + 1);
            }
        }
        
        return indices;
    }
    
    int charToInt(char c)
    {
        return c - 'a';
    }
};