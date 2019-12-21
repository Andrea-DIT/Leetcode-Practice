class Solution {
public:
	string removeDuplicates(string S) {
		string output;

		for (int i = 0; i < S.length(); i++){
			if (output.size() == 0){
				output.push_back(S[i]);
			}
			else{
				if (S[i] == output.back()){
					output.pop_back();
				}
				else{
					output.push_back(S[i]);
				}
			}
		}
		return output;
	}
};