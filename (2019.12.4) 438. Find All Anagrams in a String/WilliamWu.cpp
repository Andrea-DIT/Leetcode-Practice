class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> letter_s(26, 0);
        vector<int> letter_p(26, 0);
        vector<int> ans;
        
        int p_size = p.length();
        
        if(s.length() < p.length())
            return ans;
               
        for(int j = 0; j < p_size; j++)
        {
            int index = p[j] - 'a';
            letter_p[index]++;
        }
        
        for(int j = 0; j < p_size-1; j++)
        {
            int index = s[j] - 'a';
            letter_s[index]++;
        }
           
        for(int i = 0; i < s.length()-p_size+1; i++)
        {
            letter_s[s[i+p_size-1] - 'a']++;
            
            bool done = true;
            for(int k = 0; k < letter_s.size(); k++)
            {
                if(letter_s[k]!=letter_p[k])
                {
                    done = false;
                    break;
                }
            }
              
            if(done)
                ans.push_back(i);
            
            letter_s[s[i] - 'a']--;
        }
        
        return ans;
    }
    

};
