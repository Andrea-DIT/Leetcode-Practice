class Solution {
public:
    int countPrimes(int n) {
        if (n<3) { return 0; }
        
        int cnt = 1;
        for (int i=3; i<n; i+=2) {
            bool isPrime = true;
            for (int j=3; j*j<=i; j+=2) {
                if (i%j == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) { cnt++; }
        }
        
        return cnt;
    }
};
