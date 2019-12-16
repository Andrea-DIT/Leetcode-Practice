class Solution {
public:
	int countSquares(vector<vector<int>>& matrix) {
		int count = 0;
		for (int length = 1; length <= matrix.size() && length <= matrix[0].size(); length++){
			for (int i = 0; i <= matrix.size() - length; i++){
				for (int j = 0; j <= matrix[i].size() - length; j++){
					count = (isSqure(matrix, i, j, length)) ? count + 1 : count;
				}
			}
		}
		return count;
	}
	bool isSqure(vector<vector<int>>& matrix, int i_index, int j_index, int length){
		for (int i = i_index; i < i_index + length; i++){
			for (int j = j_index; j < j_index + length; j++){
				if (matrix[i][j] != 1) return false;
			}
		}
		return true;
	}
};