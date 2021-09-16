class Solution {
public:
    string removeDuplicates(string S) {
        string::iterator it = S.begin();
        while(it != S.end()) {
            if (*it != *(it+1)) {
                ++it;
            } else {
                if ((it == S.begin()) && (it+1) == (S.end()-1)) {
                    return "";
                } else if (it == S.begin()) {
                    S.erase(S.begin(), S.begin()+2);
                    it = S.begin();
                } else {
                    S.erase(it, it+2);
                    --it;
                }
            }
        }
        
        return S;
    }
};