class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int>::iterator start = A.begin();
        vector<int>::iterator end = A.end()-1;
        
        while(start<end)
        {
            if( (*start)%2==1 )
            {
                *start ^= *end;
                *end   ^= *start;
                *start ^= *end;
                end--;
            }
            else
                start++;
        }
        
        return A;
    }
};
