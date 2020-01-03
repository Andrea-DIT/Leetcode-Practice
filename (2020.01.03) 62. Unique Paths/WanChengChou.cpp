class Solution {
public:
    int uniquePaths(int m, int n)
    {
        int steps_long = (m - 1 > n - 1)? (m - 1) : (n - 1);
        int steps_short = (m - 1 > n - 1)? (n - 1) : (m - 1);
        long answer = 1;
        for(int j=1, i=steps_long+steps_short; j<=steps_short; j++)
        {
            answer *= i;
            answer /= j;
            i--;
        }
        return answer;
    }
};