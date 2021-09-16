class Solution {
public:
    int countSquares(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int answer = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int squareL = 1;
                int element = 1;
                int checkL = (n - i < m - j)? (n - i) : (m - j);
                while(element != 0 && squareL <= checkL)
                {
                    for(int k=0; k<squareL; k++)
                    {
                        for(int l=0; l<squareL; l++)
                        {
                            element *= matrix[i+k][j+l];
                            if(element == 0) break;
                        }
                        if(element == 0) break;
                    }
                    if(element) answer++;
                    squareL++;
                }
            }
        }
        return answer;
    }
};