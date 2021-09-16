class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int result = t[t.size() - 1] - 'a';
        for(int i=0; i<s.size(); i++)
        {
            result = result + (t[i] - 'a') - (s[i] - 'a');
        }
        return ('a' + result);
    }
};