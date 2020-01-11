class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0, b = 0, c = 0;
        
        for (const auto &_i : nums)
        {
            if (0 == _i)
            {
                a++;
                nums[a+b+c-1] = 2;
                nums[a+b-1] = 1;
                nums[a-1] = 0;
            }
            else if (1 == _i)
            {
                b++;
                nums[a+b+c-1] = 2;
                nums[a+b-1] = 1;
            }
            else
            {
                c++;
                nums[a+b+c-1] = 2;
            }
        }
    }
    
};