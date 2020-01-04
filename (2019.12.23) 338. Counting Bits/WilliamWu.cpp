class Solution {
public:
    vector<int> countBits(int num) {
        
        if(num==0)
            return vector<int>{0};
        vector<int> ans{0,1};
        if(num==1)
            return ans;
        
        int length = ans.size();
        int counter = 0;
        for(int i = 2; i <= num; i++)
        {
            ans.push_back(1+ans[counter]);
            counter++;
            if(counter==length)
            {
                counter=0;
                length = ans.size();
            }
        }
        
        return ans;
    }
};
