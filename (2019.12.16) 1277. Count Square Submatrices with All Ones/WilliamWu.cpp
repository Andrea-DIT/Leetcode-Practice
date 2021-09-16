class Solution {
    
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int min = 0;
        if(rows < cols)
            min = rows;
        else
            min = cols;
        
        int ans = 0;
        
        for(int a = 1; a <= min; a++)
        {
            for(int y = 0; y < rows-(a-1); y++)
            {              
                for(int x = 0; x < cols-(a-1); x++)
                {
                    bool status = true;
                    for(int m = 0; m < a; m++)
                    {
                        for(int n = 0; n < a; n++)
                        {
                            if(matrix[y+m][x+n]==0)
                            {
                                status = false;
                                break;
                            }
                        }
                        
                        if(status==false)
                            break;
                    }  
                    
                    if(status)
                        ans++;
                }
            }
        }
        
        return ans;
    }
};
