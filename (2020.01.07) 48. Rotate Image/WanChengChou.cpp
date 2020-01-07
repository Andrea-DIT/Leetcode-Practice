class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int i = 0;
        int j_start = 0;
        int j_end = n - 1;
        while(i < n / 2)
        {
            int j = j_start;
            while(j < j_end)
            {
                int a = i;
                int b = j;
                int tmp = matrix[a][b];
                updateData(matrix, a, b);
                updateData(matrix, a, b);
                updateData(matrix, a, b);
                matrix[a][b] = tmp;
                j++;
            }
            i++;
            j_start++;
            j_end--;
        }
    }
    
    void updateData(vector<vector<int>>& matrix, int& i, int& j)
    {
        int n = matrix.size();
        matrix[i][j] = matrix[n - j - 1][i];
        int k = i;
        i = n - j - 1;
        j = k;
    }
};