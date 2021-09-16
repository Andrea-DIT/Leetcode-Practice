class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num < 0) return false;
        if (num == 1) return true;
        
        bitset<32> binary(num);
        if (binary.count() == 1) {
            string str_binary = binary.to_string();
            // if bitsize is odd, %2 will be 0
            if (str_binary.find("1") % 2 == 1) {
                return true;
            }
        }
        
        return false;
    }
};
