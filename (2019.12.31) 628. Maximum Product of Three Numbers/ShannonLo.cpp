class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int res = 1;
        
        if(nums.size()==3)
        {
            for(int n:nums)
                res *= n;
        }
        else
        {
            sort(nums.begin(), nums.end());
			res = max(nums[0] * nums[1] * nums[nums.size()-1], nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);     
        }
        
        return res;
    }
};