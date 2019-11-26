class Solution {
public:
    int numJewelsInStones(string J, string S) {
        const char* matched_char_ptr;
        int matched_num = 0;
        // find the first matched char occur, return it's location, otherwise return NULL
        matched_char_ptr = std::strpbrk(S.c_str(), J.c_str());
        while (matched_char_ptr != NULL) {
            // cout << " " << *pch;
            ++matched_num;
            // continue searching the remain string 
            matched_char_ptr = std::strpbrk(matched_char_ptr+1, J.c_str());
        }

        return matched_num; 
    }
};