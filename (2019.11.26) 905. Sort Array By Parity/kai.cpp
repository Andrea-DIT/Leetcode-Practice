class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {

		if (A.size() == 0)
			return A;

		int begin = 0;
		int end = A.size() - 1;
		while (true){
			if (A[begin] % 2 == 0) begin++;
			if (A[end] % 2 == 1) end--;
			if (begin >= end) return A;

			if (A[begin] % 2 == 1 & A[end] % 2 == 0)
				swap(&A[begin], &A[end]);
		}
	}
	void swap(int * p, int * q)
	{
		int tmp = *p;
		*p = *q;
		*q = tmp;
	}
};