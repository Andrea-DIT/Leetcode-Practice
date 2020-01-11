class Solution {
public:
    char findTheDifference(string s, string t) {
        int output = 0;
        
        for (const char &c : t)
        {
            output += c;
        }
        
        for (const char &c : s)
        {
            output -= c;
        }
        
        return (char)output;
    }
};