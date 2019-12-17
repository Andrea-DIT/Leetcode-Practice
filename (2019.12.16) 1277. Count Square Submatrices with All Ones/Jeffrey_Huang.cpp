class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
        {
            return 0;
        }
        int output = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++) 
            {
                if(matrix[i][j] == 0)
                {
                    continue;
                }
                if(i >= 1 && j >= 1)
                {
                    matrix[i][j] = min(min(matrix[i-1][j-1] + 1, matrix[i-1][j] + 1), matrix[i][j-1] + 1);
                } 
                output += matrix[i][j];
            }
        }
        return output;
    }
    
    
};