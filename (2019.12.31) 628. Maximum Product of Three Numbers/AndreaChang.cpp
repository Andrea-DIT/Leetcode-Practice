class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // sort descending
        sort(nums.begin(), nums.end(), greater<int>());
        
        int length = nums.size();
        int max_product = max(nums[0]*nums[1]*nums[2],
                              nums[0]*nums[length-1]*nums[length-2]);
        
        return max_product;
    }
};
