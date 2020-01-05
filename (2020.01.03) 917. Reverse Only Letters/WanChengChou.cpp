class Solution {
public:
    string reverseOnlyLetters(string S)
    {
        int start = 0, end = S.length() - 1;
        while(start < end)
        {
            while(start < end && !isalpha(S[start])) start++;
            while(start < end && !isalpha(S[end])) end--;
            if(S[start] != S[end]) swap(S[start], S[end]);
            start++;
            end--;
        }
        
        return S;
    }
};