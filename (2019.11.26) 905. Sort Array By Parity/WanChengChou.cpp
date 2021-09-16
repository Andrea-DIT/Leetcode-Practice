class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        vector<int> A_copy = A;
        int j_start = 0, j_end = A.size() - 1;
        for(int i= 0; i<A.size(); i++)
        {
            int num = A[i];
            if(num % 2 == 0)
            {
                A_copy[j_start] = num;
                j_start++;
            }
            else
            {
                A_copy[j_end] = num;
                j_end--;
            }
        }
        return A_copy;
    }
};