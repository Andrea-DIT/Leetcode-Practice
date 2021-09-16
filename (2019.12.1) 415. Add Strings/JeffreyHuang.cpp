class Solution {
public:
    string addStrings(string num1, string num2) {

        char carry = '0';
        
        if (num1.size() <= num2.size())
        {
            myStrAdder(num2, num1, carry, num2.size() - 1, num1.size() - 1);
            return num2;
        }
        else
        {
            myStrAdder(num1, num2, carry, num1.size() - 1, num2.size() - 1);
            return num1;
        }
        
        
        return num1;
    }
    
    void myStrAdder(string &str, string &str2, char &carry, int idx1, int idx2)
    {
        if (idx2 >= 0)
        {
            myFullAdder(str[idx1], str2[idx2], carry);
        
            myStrAdder(str, str2, carry, idx1 - 1, idx2 - 1);
        }
        else
        {
            
            while (idx1 >= 0)
            {
                if (!isCarry(str[idx1] - 48, 0, carry - 48))
                {
                    break;
                }
                
                char dummy = '0';
                
                myFullAdder(str[idx1], dummy, carry);
                idx1--;
            }
            
            if (carry == '1')
            {
                if (idx1 == -1)
                {
                    str.insert(0, 1, '1');
                }
                else
                {
                    str[idx1]++;
                }
            }
        }
        
    }
    
    void myFullAdder(char &c1, char &c2, char &carry)
    {
        const char tmpCarry = isCarry(c1 - 48, c2 - 48, carry - 48) ? '1' : '0';
        
        c1 = ((c1 - 48) + (c2 - 48) + carry);
            
        c1 = (tmpCarry == '1') ? c1 - 10 : c1;
        
        carry = tmpCarry;
    }
    
    bool isCarry(const char &c1, const char &c2, const char &carry)
    {
        return (c1 + c2 + carry > 9) ? true : false;
    }
};