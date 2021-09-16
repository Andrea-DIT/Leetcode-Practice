class Solution {
public:
	bool isHappy(int n) {
		int count = 0;
		vector<int> nums;
		vector<int>::iterator nums_iter;

		while (true){
			while (n){
				count += pow(n % 10, 2);
				n /= 10;
			}

			nums_iter = find(nums.begin(), nums.end(), count);
			if (count == 1) {
				return true;
			}
			else if (nums_iter != nums.end()) {
				return false;
			}
			else{
				nums.push_back(count);
				n = count;
				count = 0;
				
			}
		}
	}
};
