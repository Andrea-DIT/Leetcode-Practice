class Solution {
public:
    int bitwiseComplement(int N) {
        int tmp = 1;
        while (N > tmp)
        {
            tmp = tmp * 2 + 1;
        }
        return N ^ tmp;
    }
};