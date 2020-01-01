class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last = nums.size()-1;
        int cand1 = nums[0]*nums[1]*nums[last];
        int cand2 = nums[last-2]*nums[last-1]*nums[last];
        return max(cand1, cand2);
    }
};