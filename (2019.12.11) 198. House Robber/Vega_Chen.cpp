class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        vector<int> earn(nums.size()+1,0);
        earn[0] = 0;
        earn[1] = nums[0];
        earn[2] = max(nums[0], nums[1]);
        
        for(int i=3; i<nums.size()+1; ++i){
            earn[i] = max(nums[i-1]+earn[i-2], earn[i-1]);
        }
        return earn.back();
    }
};