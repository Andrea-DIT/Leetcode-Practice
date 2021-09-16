class Solution {
public:
    int uniquePaths(int m, int n) {
        int grid[m][n], col, row;
        
        for(col=0; col<m; col++)
            grid[col][0] = 1;
        for(row=0; row<n; row++)
            grid[0][row] = 1;
        
        for(col=1; col<m; col++)
            for(row=1; row<n; row++)
                grid[col][row] = grid[col][row-1] + grid[col-1][row];
        
        return grid[m-1][n-1];
    }
};