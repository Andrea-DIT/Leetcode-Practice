class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
        // count every char
        vector<int> chars_count(26, 0);
        for(int i=0; i<chars.length(); i++)
        {
            chars_count[chars[i] - 'a']++;
        }
        
        int sum = 0;
        for(int i=0; i<words.size(); i++)
        {
            // check every char in one word
            bool addLength = true;
            vector<int> chk_count = chars_count;
            for(int j=0; j<words[i].length(); j++)
            {
                chk_count[words[i][j] - 'a']--;
                if(chk_count[words[i][j] - 'a'] < 0)
                {
                    addLength = false;
                    break;
                }
            }
            if(addLength)
            {
                sum += words[i].length();
            }
        }
        return sum;
    }
};