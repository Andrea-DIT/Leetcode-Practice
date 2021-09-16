class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int L = 0, R = A.size() - 1;
        while (L < R)
        {
            if (A[L] % 2 > A[R] % 2)
            {
                mySwap(A[L], A[R]);
            }
            
            if (A[L] % 2 == 0)
            {
                L++;
            }
            
            if (A[R] % 2 == 1)
            {
                R--;
            }
        }
        
        return A;
    }
    
    void mySwap(int &a, int &b)
    {
        a = a^b;
        b = a^b;
        a = a^b;
    }
};