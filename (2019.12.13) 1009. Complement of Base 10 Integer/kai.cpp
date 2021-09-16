class Solution {
public:
	int bitwiseComplement(int N) {
		int count = 0, M = N;
		if (N == 0) return 1;

		while (M > 0){
			M /= 2;
			count += 1;
		}
		return pow(2, count) - N - 1;
	}
};