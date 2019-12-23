class Solution {
    
public:
    
    int getOnes(int a)
    {
        int count = 0;
        while(a>0)
        {
            if(a & 0x01)
                count++;
            a >>= 1;
        }
        return count;
    }
    
    vector<int> countBits(int num) {
        
        vector<int> ans;
        
        for(int i = 0; i <= num; i++)
            ans.push_back(getOnes(i));            
        
        return ans;
    }
};
