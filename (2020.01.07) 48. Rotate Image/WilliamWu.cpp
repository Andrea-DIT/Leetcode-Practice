class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int size = matrix.size();
        int half = (int)(size/2);

        for(int rows = 0; rows < size; rows++)
        {
            for(int cols = 0; cols < size; cols++)
            {
                if(rows==cols)
                    break;
                
                swap(matrix[rows][cols], matrix[cols][rows]);
            }
        }
        
        for(int rows = 0; rows < size; rows++)
        {
            for(int cols = 0; cols < half; cols++)
            {
                swap(matrix[rows][cols], matrix[rows][size-1-cols]);
            }
        }
    }
};
