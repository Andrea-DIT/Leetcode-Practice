class Solution {
public:
    int bitwiseComplement(int N) {
        
        int bits = 0;
        int num = N;
        int a = 0;
        
        if(N==0)
            return 1;
        
        while(N>0)
        {
            bits++;
            N >>= 1;
        }
        
        for(int i = 0; i < bits; i++)
        {
            a <<= 1;
            a++;
        }
        
        return num^a;
    }
};
