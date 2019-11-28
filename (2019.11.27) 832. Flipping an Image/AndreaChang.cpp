class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int rows = A.size();
        int cols = A[0].size();
        vector<vector<int>> result(rows, vector<int>(cols));
        
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if( (A[r][c] != 1) && (A[r][c] != 0) ) { return A; }
                
                result[r][c] = !A[r][cols-c-1];
            }
        }
        
        return result;
    }
};