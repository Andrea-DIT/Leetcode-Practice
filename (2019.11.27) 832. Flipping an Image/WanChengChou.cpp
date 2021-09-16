class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {
        int row = A.size();
        int col = A[0].size();
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col / 2; j++)
            {
                int tmp = A[i][j];
                A[i][j] = A[i][col - 1 - j]^1;
                A[i][col - 1 - j] = tmp^1;
            }
            if(col % 2 == 1)
            {
                A[i][col / 2] = A[i][col / 2]^1;
            }
        }
        return A;
    }
};