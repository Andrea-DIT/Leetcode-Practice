class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = t[t.length()-1]-'a';
        
        for (int i=0; i<s.length(); ++i) {
            sum -= s[i]-'a';
            sum += t[i]-'a';
        }
        
        return sum+'a';
    }
};