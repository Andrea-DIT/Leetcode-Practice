class Solution {
public:
        
    int climbStairs(int n) {
        
        if(n<0)
            return 0;
        
        int dp[2] = {1, 2};
        
        for(int i = 3; i <= n; i++)
            dp[(i-1)%2] += dp[i%2];
        
        return dp[(n-1)%2];
    }
};
