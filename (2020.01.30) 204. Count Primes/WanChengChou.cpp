class Solution {
public:
    int countPrimes(int n)
    {
        if(n <= 2) return 0;
        std::vector<bool> primesFlag(n, true);
        primesFlag[0] = false;
        primesFlag[1] = false;

        int count = n - 2;
        for(int i=2; i*i<n; i++)
        {
            if(primesFlag[i])
            {
                for(int j=i; i*j<n; j++)
                {
                    if(primesFlag[i*j])
                    {
                        count--;
                        primesFlag[i*j] = false;
                    }
                }
            }
        }
        return count;
    }
};