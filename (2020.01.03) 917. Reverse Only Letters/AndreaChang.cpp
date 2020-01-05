class Solution {
public:
    string reverseOnlyLetters(string S) {
        int lhs = 0;
        int rhs = S.length()-1;
        
        while (lhs < rhs) {
            if ( isLetter(S[lhs]) && isLetter(S[rhs]) ) {
                swap(S, lhs, rhs);
                lhs++;
                rhs--;
            }
            
            if ( isLetter(S[lhs]) == false) {
                lhs++;
            }
            
            if ( isLetter(S[rhs]) == false) {
                rhs--;
            }
        }
        
        return S;
    }
    
    bool isLetter(char& c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }
    
    void swap(string& S, int a, int b) {
        char tmp = S[a];
        S[a] = S[b];
        S[b] = tmp;
    }
};
