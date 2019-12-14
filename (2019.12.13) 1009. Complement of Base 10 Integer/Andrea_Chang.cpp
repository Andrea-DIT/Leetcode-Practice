class Solution {
public:
    int bitwiseComplement(int N) {
        if (N==0) return 1;
        
        int bits_size = (int)(log(N)/log(2))+1;   
        bitset<32> binary(N);
        binary.flip();
        
        for (int i=bits_size-1; i<32; ++i) {
            binary.set(i, 0);            
        }
 
        return binary.to_ulong();
    }
};