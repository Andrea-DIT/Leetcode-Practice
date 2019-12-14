class Solution {
public:
    int rob(vector<int>& nums)
    {
        if(nums.size() == 0)
        {
            return 0;
        }
        else if(nums.size() == 1)
        {
            return nums[0];
        }
        else
        {
            vector<int> max_sum;
            max_sum.push_back(nums[0]);
            max_sum.push_back(max(nums[0], nums[1]));
            for(int i=2; i<nums.size(); i++)
            {
                max_sum.push_back(max(max_sum[i-2] + nums[i], max_sum[i-1]));
            }
            return max_sum[nums.size() - 1];
        }
    }
    
};
