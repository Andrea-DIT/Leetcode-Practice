class Solution {
public:
    int squareSum(int n)
    {
        int sum = 0;
        while(n>0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        set<int> st;
        
        while (1)
        {
            n = squareSum(n);
            
            if(n == 1) return true;           
            if (st.count(n))
                return false;
            
            st.insert(n);
        } 
        
        return true;
    }
};