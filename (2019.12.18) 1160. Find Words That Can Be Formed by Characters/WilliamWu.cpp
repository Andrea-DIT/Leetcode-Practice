class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int ans = 0;        
        if(chars.length()==0 || words.size()==0)
            return ans;
        
        vector<int> table_c(26, 0);
        for(int i = 0; i < chars.length(); i++)
            table_c[chars[i]-'a']++;
        
        for(int j = 0; j < words.size(); j++)
        {
            bool status = true;
            vector<int> table_w(26, 0);
            for(int k = 0; k < words[j].length(); k++)
            {
                table_w[words[j][k]-'a']++;
                if(table_w[words[j][k]-'a'] > table_c[words[j][k]-'a'])
                {
                    status = false;
                    break;
                }
            }
            
            if(status==true)
                ans+= words[j].length();
        }
        
        return ans;
    }
};
