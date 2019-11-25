class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int ans = 0;
        if(J=="" || S=="")
            return ans;
        
        
        vector<char> input;
        for(int i = 0; i < J.length(); i++)
        {
            if(find(input.begin(), input.end(), J[i])==input.end())
                input.push_back(J[i]);
        }
        
        for(int j = 0; j < input.size(); j++)
        {
            string::iterator pos = find(S.begin(), S.end(), input[j]);    
            
            while(pos!=S.end())
            {
                ans++;
                pos = find(pos+1, S.end(), input[j]);
            }
        }
        return ans;

    }
};