class Solution {
public:
    
    int func(int n)
    {
        double a = 0;
        while(n>0)
        {
            a += pow(n%10,2);
            n /= 10;
        }
        
        return a;
    }
    
    bool isHappy(int n) {
        
        bool ans = true;
        vector<int> history;
        while(n>0)
        {
            n = func(n);
            if(n==1)
            {
                ans = true;
                break;
            }
            else if( find(history.begin(), history.end(), n) != history.end())
            {
                ans = false;
                break;
            }                
            else
                history.push_back(n);
            
            
        }
        
        return ans;
    }
};
