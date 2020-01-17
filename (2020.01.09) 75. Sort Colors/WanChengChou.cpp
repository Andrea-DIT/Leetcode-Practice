class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        if (nums.size() <= 1) return;
        int new_zero_end_id = 0;
        int new_two_start_id = nums.size() - 1;
        int i = 0;
        while(i != new_two_start_id + 1)
        {
            if(nums[i] == 0 && i != new_zero_end_id)
            {
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin(), 0);
                new_zero_end_id++;
            }
            else if(nums[i] == 2 && i != new_two_start_id)
            {
                nums.erase(nums.begin() + i);
                nums.push_back(2);
                i--;
                new_two_start_id--;
            }
            i++;
        }
    }
};