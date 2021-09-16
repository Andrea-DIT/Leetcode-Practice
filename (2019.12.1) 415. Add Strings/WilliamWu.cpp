class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string ans, tmp;
        string::reverse_iterator ptr1 = num1.rbegin();
        string::reverse_iterator ptr2 = num2.rbegin();
        string::reverse_iterator rend1 = num1.rend();
        string::reverse_iterator rend2 = num2.rend();
                        
        int carry = 0;
        while(ptr1 < rend1 || ptr2 < rend2 || carry > 0)
        {
            int num1 = 0;
            int num2 = 0;
            if(ptr1 < rend1)
                num1 = (*ptr1-'0');
            if(ptr2 < rend2)
                num2 = (*ptr2-'0');
            
            int sum = num1 + num2 + carry;
            carry = sum/10;
            sum %= 10;
            tmp += (sum+'0');
            
            if(ptr1 < rend1)
                ptr1++;
            if(ptr2 < rend2)
                ptr2++;
        }
        
        for(int i = tmp.size()-1; i >= 0 ; i--)
            ans += tmp[i];
        
        return ans;
    }
};
