class Solution {
public:
    string addStrings(string num1, string num2)
    {
        string str;
        int length1 = num1.length(), length2 = num2.length();
        int length = (length1 > length2)? length1 : length2;
        
        int sum = 0;
        int tmp = 0;
        for(int i = 0; i < length; i++)
        {
            int num1_digit = (i > length1 - 1)? 0 : charToDigitInt(num1[length1 - i - 1]);
            int num2_digit = (i > length2 - 1)? 0 : charToDigitInt(num2[length2 - i - 1]);
            sum = num1_digit + num2_digit + tmp;
            tmp = sum / 10;
            updateDigitToStr(sum % 10, str);
            if(i == length - 1 && tmp != 0) str = "1" + str;
        }
        return str;
    }
    
    int charToDigitInt(char c)
    {
        return c - '0';
    }
    
    void updateDigitToStr(int digit, string& str)
    {
        str = char('0' + digit) + str;
    }
};