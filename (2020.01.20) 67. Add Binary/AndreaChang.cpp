// similar with #415
class Solution {
public:
    string addBinary(string a, string b) {
        int remain_a = a.length()-1;
        int remain_b = b.length()-1;
        
        string ans;
        int carry = 0;
        while (remain_a >= 0 || remain_b >=0) {
            // if no remain digit, add leading zero
            int digit_a = (remain_a < 0) ? 0 : a[remain_a]-'0';
            int digit_b = (remain_b < 0) ? 0 : b[remain_b]-'0';
            
            int sum = digit_a + digit_b + carry;
            ans.insert(ans.begin(), sum % 2 + '0');
            carry = sum / 2;
            
            remain_a--;
            remain_b--;
        }
        
        if (carry == 1) { ans.insert(ans.begin(), carry+'0'); }
        
        return ans;
    }
};
