class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int res = 0;
        
        for(int i = 0; i < matrix.size(); ++i)
        {
            for(int j = 0; j < matrix[0].size(); ++j)
            {
                if(matrix[i][j])
                {
                    res++;
                    for(int d = 1; d < min(matrix[0].size() - j, matrix.size() - i); d++)
                    {
                        int x;
                        for(x = 0; x <= d; ++x)
                            if (matrix[i + d][j + x] == 0 || matrix[i + x][j + d] == 0)
                                break;
                        
                        if(x <= d) break;
                        res++;
                    }
                }
            }
        }
        
        return res;
    }
};
