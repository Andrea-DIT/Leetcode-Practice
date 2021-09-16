class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> s_table(26, 0), p_table(26, 0);
        vector<int> ans;
        
        if (s.length() < p.length()) { return ans; }
        
        // sliding window (wsize is p's length) from the begin of s
        int s_code = 0, p_code = 0;
        for (int i = 0; i < p.length(); ++i) {
            s_code = s[i]-'a';
            p_code = p[i]-'a';
            ++s_table[s_code];
            ++p_table[p_code];
        }
        if (s_table == p_table) { ans.push_back(0); }
        
        // sliding to next window, add a new char, remove first char
        int new_code = 0, rm_code = 0;
        for (int i = p.length(); i < s.length(); ++i) {
            new_code = s[i]-'a';
            rm_code = s[i-p.length()]-'a';
            ++s_table[new_code];
            --s_table[rm_code];
            
            if (s_table == p_table) { ans.push_back(i-p.length()+1); }
        }
        
        return ans;
    }
};
