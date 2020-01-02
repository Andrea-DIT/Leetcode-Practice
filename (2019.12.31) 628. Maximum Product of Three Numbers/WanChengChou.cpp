class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int candidate1 = nums[size-1] * nums[size-2] * nums[size-3];
        int candidate2 = nums[size-1] * nums[0] * nums[1];
        return (candidate1 > candidate2)? candidate1 : candidate2;
    }
};