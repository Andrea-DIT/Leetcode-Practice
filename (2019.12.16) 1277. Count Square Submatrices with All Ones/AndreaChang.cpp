class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        if (rows==1 && cols==1) return matrix[0][0];
        
        // compute integral image
        int sum;
        vector<vector<int>> integral(rows+1, vector<int>(cols+1));
        for (int r=0; r<rows; ++r) {
            sum = 0;
            for (int c=0; c<cols; ++c) {
                sum += matrix[r][c];
                if (r==0 || c==0) {
                    if (r>0) {
                        integral[r+1][c+1] = integral[r][c+1] + sum;
                        continue;
                    }
                    integral[r+1][c+1] = sum;
                    continue;
                }
                integral[r+1][c+1] = integral[r][c+1] + sum;
            }
        }
        matrix.clear();
        
        // compute total number of squares of each side
        if (rows==2 && cols==2) return integral[2][2];
        int max_side = min(rows, cols);
        int num = 0;
        int count = integral[rows][cols];
        cout<<count<<endl;
        for (int s=2; s<=max_side; ++s) {
            for (int r=s; r<rows+1; ++r) {
                for (int c=s; c<cols+1; ++c) {
                    num = integral[r][c]-integral[r-s][c]-integral[r][c-s]+integral[r-s][c-s];
                    if (num == s*s) {
                        ++count;
                    }
                }
            }
        }
        
        return count;
    }
};
