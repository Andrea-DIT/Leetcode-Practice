class Solution {
public:
    int climbStairs(int n)
    {
        if(n <= 3) return n;
        int pre = 3, prepre = 2, cur;
        for(int i=0; i<n-3; i++)
        {
            cur = pre + prepre;
            prepre = pre;
            pre = cur;
        }
        return cur;
    }
};