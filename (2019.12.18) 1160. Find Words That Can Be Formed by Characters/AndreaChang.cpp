class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        array<short, 26> lut_char = {0};
        for (int i=0; i<chars.length(); ++i) {
            lut_char[chars[i]-'a']++;
        }
        
        int ans = 0, idx = 0;
        bool is_good = false;
        for (int i = 0; i < words.size(); ++i) {
            array<short, 26> lut_arith = lut_char;
            for (int j = 0; j < words[i].length(); ++j) {
                idx = words[i][j]-'a';
                lut_arith[idx]--;
                if (lut_arith[idx] < 0) {
                    is_good = false;
                    break;
                }
                is_good = true;
            }
            
            if (is_good) {
                ans += words[i].length();
            }
        }
        
        return ans;
    }
};
