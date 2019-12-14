class Solution {
public:
    int bitwiseComplement(int N) {
        int M = N;
        int b = 0;
        
        while(M>>1){
            M = M>>1;
            ++b;
        }
        ++b;
        
        if((1<<b)!=INT_MIN) return (1<<b)-1-N;
        else return INT_MAX-N;
    }
};