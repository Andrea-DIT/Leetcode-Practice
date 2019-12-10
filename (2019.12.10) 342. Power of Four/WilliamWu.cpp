class Solution {
public:
    bool isPowerOfFour(int num) {
        
        bool ans = false;
        if(num<=0)
            return ans;
        
        if( (num & 0xAAAAAAAA)>0 )
            return ans;
        
        int a = num%0x55555554;
        
        while(a>0)
        {
            if(a&0x00000001)
                break;
            a >>= 2;
        }
        
        if((a-1)==0)
            ans = true;
        
        return ans;
    }
};
