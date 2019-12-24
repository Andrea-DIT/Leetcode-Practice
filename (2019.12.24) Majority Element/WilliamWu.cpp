class Solution {
public:
    
    int func(int n)
    {
        int a = n;
        int b = 0;
        while(a>0)
        {
            b = b + a%10;
            a /= 10;
        }
        return b;
    }
    
    int addDigits(int num) {
        
        int ans = num;
        
        while((ans/10)!=0)
            ans = func(ans);
        
        return ans;

    }
};
