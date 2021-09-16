class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res, mp(26);
        for (auto &c : p)
            mp[c - 'a']++;
        
        int cnt = p.length(), lt = 0, rt = 0;
        
        if (p.length() > s.length()) return {};
        
        while (rt < s.length()) 
        {
            if (mp[s[rt++] - 'a']-- > 0)
                cnt--;
            else 
            {
                while (mp[s[lt++] - 'a']++ >= 0)
                    cnt++;
            }
            
            if (cnt == 0)
                res.push_back(lt);
        }
        
        return res;
    }
};