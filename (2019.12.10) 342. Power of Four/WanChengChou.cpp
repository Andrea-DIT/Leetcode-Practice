class Solution {
public:
    bool isPowerOfFour(int num)
    {
        if(num < 0) return false;
        
        bitset<31> bit_num(num);
        int firstTrue = bit_num.size();
        int zeroCount = 0;
        
        for(int i=0; i<bit_num.size(); i++)
        {
            if(i < firstTrue)
            {
                if(bit_num[i] == 0)
                {
                    zeroCount++;
                }
                else
                {
                    firstTrue = i;
                }
            }
            else
            {
                if(bit_num[i] == 1) return false;
            }
        }
        if(zeroCount % 2 == 0 && firstTrue != bit_num.size()) return true;
        else return false;
        
    }
};