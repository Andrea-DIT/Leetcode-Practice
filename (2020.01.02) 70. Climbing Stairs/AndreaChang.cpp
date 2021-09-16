class Solution {
public:
    int climbStairs(int n) {
        if (n==1 || n==2) return n;
        
        unsigned int acc_array[2] = {1, 2};
        for (int i=2; i<n; i+=2) {
            acc_array[0] += acc_array[1];
            acc_array[1] += acc_array[0];
        }
        
        if (n%2 == 0) return acc_array[1];
        
        return acc_array[0];
    }
};
