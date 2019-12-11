class Solution {
public:
    bool isPowerOfFour(int num) 
	{
        int count = 0;
        
        if (num>=1 && !(num&(num-1)))
        {
            while(num > 1)
            {
                num >>= 1;
                count += 1;
            }
            
            if(count%2==0) return true;
        }

        return false;
    }
};