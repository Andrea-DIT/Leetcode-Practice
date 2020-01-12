class Solution {
public:
    char findTheDifference(string s, string t) {
        int count_s = 0, count_t = 0;
        
        for(int i = 0; i < s.length(); i++) count_s += s[i];
        
        for(int i = 0; i < t.length(); i++) count_t += t[i];
        
        return (char)(count_t - count_s);
    }
};