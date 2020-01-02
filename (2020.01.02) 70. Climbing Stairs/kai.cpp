class Solution {
public:
    int climbStairs(int n) {
        vector<int> count = {1, 2};
        int temp;
        
        if (n == 1) return 1;
        if (n == 2) return 2;
        for (int i = 2; i < n; i++){
            temp = count[0] + count[1];
            count[0] = count[1];
            count[1] = temp;
        }
        return temp;
    }
};