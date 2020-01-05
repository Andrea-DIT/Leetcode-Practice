class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> counter(n, vector<int>(m, 1));
        
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                counter[i][j] = counter[i][j-1] + counter[i-1][j];
            }
        }
        
        return counter[n-1][m-1];
        
    }
};