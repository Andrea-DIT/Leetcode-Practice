class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto &vec : A)
        {
            char L = 0, R = (char)(vec.size() - 1);
            
            while (L < R)
            {
                checkSwap(vec[L++], vec[R--]);
            }
            
            vec[L] = (L == R) ? vec[L] ^ 1 : vec[L];
        }
        
        return A;
    }
    
    void checkSwap(int &a, int &b)
    {
        if (a - b == 0)
        {
            a ^= 1;
            b ^= 1;
        }
    }
};