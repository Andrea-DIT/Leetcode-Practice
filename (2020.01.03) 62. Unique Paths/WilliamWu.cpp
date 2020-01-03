class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> map;
        for(int j = 0; j < n; j++)
            map.push_back(vector<int>(m, 1));
        
        for(int j = 0; j < n; j++)
        {
            for(int i = 0; i < m; i++)
            {
                if(i==0 && j==0)
                    continue;
                
                int a = 0;
                int b = 0;
                if(j-1>=0)
                    a = map[j-1][i];
                if(i-1>=0)
                    b = map[j][i-1];
                map[j][i] = a + b;
            }
        }
        return map[n-1][m-1];
    }
};
