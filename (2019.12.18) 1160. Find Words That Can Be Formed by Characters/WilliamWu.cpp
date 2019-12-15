class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int ans = 0;        
        if(chars.length()==0 || words.size()==0)
            return ans;
        
        map<char,int> table_c;
        for(int i = 0; i < chars.length(); i++)
            table_c[chars[i]]++;
        
        for(int j = 0; j < words.size(); j++)
        {
            bool status = true;
            map<char, int> table_w;
            for(int k = 0; k < words[j].length(); k++)
            {
                table_w[words[j][k]]++;
                if(table_w[words[j][k]] > table_c[words[j][k]])
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
