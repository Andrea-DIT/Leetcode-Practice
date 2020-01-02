class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int right = nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1];
        int left = nums[0]*nums[1]*nums[nums.size()-1];
        return max(right, left);
    }
};