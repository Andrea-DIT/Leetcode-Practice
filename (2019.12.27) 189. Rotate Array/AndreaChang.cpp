class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if (k > length) { k = k % length; }
        if (k == 0 || k == length) { return; }
        
        nums.insert(nums.begin(), nums.end()-k, nums.end());
        nums.erase(nums.end()-k, nums.end());
    }
};
