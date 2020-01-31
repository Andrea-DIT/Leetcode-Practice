class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
        {
            return 0;
        }
        
        int output = 0;
        
        for (int i = 2; i < n; i++)
        {
            if (i == 2 || i == 3)
            {
                output++;
                continue;
            }
            
            int tmp = sqrt(i);
            
            bool isPrime = true;
            for (int j = 2; j <= tmp && isPrime ; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
            if (isPrime)
            {
                output++;
            }
        }
        
        return output;
    }
};