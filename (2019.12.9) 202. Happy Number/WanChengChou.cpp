class Solution {
public:
    bool isHappy(int n)
    {
        map<int, int> one_loop_sum;
        int rest = 0, sum = 0;
        int keep_doing = true;
        
        while(keep_doing)
        {
            sum = 0;
            do
            {
                sum += pow(n % 10, 2);
                n = n / 10;
            }
            while(n > 0);

            one_loop_sum[sum]++;
            if(sum == 1 || one_loop_sum[sum] == 2) keep_doing = false;
            else n = sum;
        }
        if(sum == 1) return true;
        else return false;
    }
};