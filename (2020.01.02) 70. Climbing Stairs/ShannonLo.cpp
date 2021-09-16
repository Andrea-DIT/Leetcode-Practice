class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else
        {
            vector<int> step(n+1, 1);
            
            for( int i= 2; i<=n; i++)
                step[i] = step[i-1] + step[i-2];
            
            return step[n];
        }
    }
};
