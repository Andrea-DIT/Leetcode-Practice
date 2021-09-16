class Solution {
public:
    string addStrings(string num1, string num2) {
        int remain1 = num1.length()-1;
        int remain2 = num2.length()-1;
        
        string ans;
        int carry = 0;
        while (remain1 >= 0 || remain2 >= 0) {
            // if no remain digit, add leading zero
            int digit1 = (remain1 < 0) ? 0 : num1[remain1]-'0';
            int digit2 = (remain2 < 0) ? 0 : num2[remain2]-'0';
            
            int sum = digit1 + digit2 + carry;
            ans.insert(ans.begin(), sum % 10 + '0');
            carry = sum / 10;
            
            remain1--;
            remain2--;
        }
        
        if (carry > 0) { ans.insert(ans.begin(), carry+'0'); }
        
        return ans;
    }
};
