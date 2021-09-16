class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K)
    {
        int carry = 0;
        for(int i=A.size()-1; i>=0; i--)
        {
            int digit = K % 10;
            int sum = digit + A[i] + carry;
            A[i] = sum % 10;
            carry = sum / 10;
            K /= 10;
            if(K+carry == 0) break;
        }
        while(K+carry != 0)
        {
            int digit = K % 10;
            int sum = digit + carry;
            A.insert(A.begin(), sum % 10);
            carry = sum / 10;
            K /= 10;
        }
        return A;
    }
};