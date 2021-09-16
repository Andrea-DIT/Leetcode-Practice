class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int size = matrix.size();
        int a = 0;
        while(a < size)
        {
            int b = 0;
            while(b < a)
            {
                swap(matrix[a][b], matrix[b][a]);
                b++;
            }
            a++;
        }

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size/2; j++)
            {
                swap(matrix[i][j], matrix[i][size - 1 - j]);
            }
        }
    }
};