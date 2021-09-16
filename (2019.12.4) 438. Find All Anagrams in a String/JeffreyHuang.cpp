class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> charVec(26, 0);
        vector<int> output;
        
        for (const char &c : p)
        {
            charVec[c-97]++;
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            charVec[s[i] - 97]--;
            if (i >= p.size())
            {
                charVec[s[i - p.size()] - 97]++;
            }
            
            if (isHit(charVec))
            {
                output.push_back(i - p.size() + 1);
            }
        }
        
        return output;
        
    }
    
    bool isHit(const vector<int> &v)
    {
        int output = 0;
        for (const auto &element : v)
        {
            output |= element;
        }
        
        return (output != 0) ? false : true;
    }
};