class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        string::iterator ptr1 = S.begin();
        string::iterator ptr2 = S.end()-1;
        
        while(true)
        {
            while( ptr1 < S.end() && ( *ptr1 < 'A' || *ptr1 > 'z' || (*ptr1 >'Z' && *ptr1 < 'a') ) )
                ptr1++;
            while( ptr2 >= S.begin() && ( *ptr2 < 'A' || *ptr2 > 'z' || (*ptr2 >'Z' && *ptr2 < 'a') ) )
                ptr2--;

            if(ptr1>=ptr2)
                break;
            
            *ptr1 ^= *ptr2;
            *ptr2 ^= *ptr1;
            *ptr1 ^= *ptr2;
            ptr1++;
            ptr2--;  
        }
        return S;
    }
};
