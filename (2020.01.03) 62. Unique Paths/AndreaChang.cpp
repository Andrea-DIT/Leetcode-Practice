class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m==1 || n==1) return 1;
        
        vector<vector<unsigned int>> lut(n, vector<unsigned int>(m, 1));
        
        for (int r=1; r<n; ++r) {
            for (int c=1; c<m; ++c) {
                lut[r][c] = lut[r][c-1] + lut[r-1][c];
            }
        }
        
        return lut[n-1][m-1];
    }
};