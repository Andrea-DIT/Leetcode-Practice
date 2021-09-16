class Solution {
public:
    string reverseOnlyLetters(string S) {
        int i = 0, j = S.length() - 1;
        
        while (1){
            while(S[i] < 'A' || 'z' < S[i] || ('Z' < S[i] && S[i] < 'a')) i++;
            while(S[j] < 'A' || 'z' < S[j] || ('Z' < S[j] && S[j] < 'a')) j--;
            
            if (i >= j) break;
            char temp = S[i];
            S[i] = S[j];
            S[j] = temp;
            
            i++;
            j--;
        }
        return S;
    }
};