class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for (int j = 0; j < J.length(); j++){
            for (int s = 0; s < S.length(); s++){
                count= J[j] == S[s] ? count + 1 : count;
            }
        }
        return count;
    }
};
