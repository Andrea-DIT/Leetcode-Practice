class Solution {
public:
	string addStrings(string num1, string num2) {
		string s_sum = "";
		int n1, n2, carry = 0;
		int num1_size = num1.size()-1, num2_size = num2.size()-1;

		while (num1_size >= 0 || num2_size >= 0){
			for (int idx = 0; idx < 10; idx++){
				if (num1_size >= 0){
					if ((char)(idx + 48) == num1[num1_size]) n1 = idx;
				}
				else n1 = 0;

				if (num2_size >= 0){
					if ((char)(idx + 48) == num2[num2_size]) n2 = idx;
				}
				else n2 = 0;
			}
			
			s_sum = to_string((n1 + n2 + carry) % 10) + s_sum;
			carry = ((n1 + n2 + carry) > 9) ? 1:0;
			num1_size--;
			num2_size--;
		}
		if (carry == 1) s_sum = "1" + s_sum;
		return s_sum;
	}
};