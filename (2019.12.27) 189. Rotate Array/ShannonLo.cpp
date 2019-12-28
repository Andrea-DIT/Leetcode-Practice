class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()>1)
        {
            int n = nums.size();
            k %= n;
            
            nums.insert(nums.begin(), nums.end()-k, nums.end());
            nums.resize(n);
        }
    }
};