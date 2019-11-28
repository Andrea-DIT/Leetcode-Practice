class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		int count = 0;
		stones = quickSort(stones, 0, stones.size()-1);
		
		while (true){
			if (stones.size() == 1) return stones[0];
			if (stones.size() == 2) return abs(stones[0] - stones[1]);

			count = stones[0] - stones[1];
			stones.erase(stones.begin(), stones.begin()+2);

			for (int n = 0; n < stones.size(); n++){
				if (stones[n] <= count) {
					stones.insert(stones.begin() + n, count);
					break;
				}
				else if (n == stones.size() - 1)
				{
					stones.insert(stones.end(), count);
					break;
				}
			}
		}
	}

	void swap(int * p, int * q){
		int tmp = *p;
		*p = *q;
		*q = tmp;
	}

	vector<int> quickSort(vector<int> data, int left, int right){
		if (left < right){
			int i = left;
			int j = right + 1;
			while (true){
				while (i + 1 < data.size() && data[++i] > data[left]);

				while (j > 0 && data[--j] < data[left]);       
				if (i >= j) break;
				swap(&data[i], &data[j]);
			}
			swap(&data[left], &data[j]);
			
			data = quickSort(data, left, j - 1);
			data = quickSort(data, j + 1, right);
			}
		return data;
	}
		

};