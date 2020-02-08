class Solution {
public:
    string addBinary(string a, string b)
    {
        int aL = a.length();
        int bL = b.length();
        
        int i = 0, carry = 0;
        string ans;
        while(i < aL || i < bL)
        {
            int aNum = (aL - 1 - i < 0)? 0 : (a[aL - 1 - i] - '0');
            int bNum = (bL - 1 - i < 0)? 0 : (b[bL - 1 - i] - '0');
            int sum = aNum + bNum + carry;
            carry = sum / 2;
            ans.insert(ans.begin(), '0' + sum % 2);
            i++;
        }
        if(carry == 1) ans.insert(ans.begin(), '1');
        return ans;
    }
};