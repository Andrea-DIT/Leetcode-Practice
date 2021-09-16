class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int rows = A.size();
        int cols = A[0].size();
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols/2; j++)
            {
                A[i][j]        ^= A[i][cols-1-j];
                A[i][cols-1-j] ^= A[i][j];
                A[i][j]        ^= A[i][cols-1-j];
            }
        }

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                A[i][j] = (-1)*A[i][j]+1;       
        }
        
        return A;
    }
};
