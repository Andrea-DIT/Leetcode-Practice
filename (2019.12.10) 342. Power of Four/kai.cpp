class Solution {
public:
	bool isPowerOfFour(int num) {
		int remainder;
		while (num > 1){
			remainder = num % 4;
			num /= 4;
			if (remainder != 0) return false;
			else if (num == 1) return true;
		}
		if (num == 1)return true;
		else return false;
	}
};