class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> buf;
        int head = 0;
        int tail = 0;
        int match_len = 0;
        vector<int> ans;
        
        for(char c:p) buf[c]++;
        
        while( tail < s.size() ){
            if( buf[s[tail]] > 0)  match_len++;            
            buf[s[tail]]--;
            tail++;
            
            if( match_len == p.size()){
                while( buf[s[head]] < 0){
                    buf[s[head]]++;
                    head++;
                }
                
                if( tail-head == match_len) ans.push_back(head);
                buf[s[head]]++;
                head++;
                match_len--;                
            }
        }
        
        return ans;
    }
};