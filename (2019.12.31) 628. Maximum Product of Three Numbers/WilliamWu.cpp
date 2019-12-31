class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
              
        int v1 = nums[0]*nums[1];
        int v2 = nums[nums.size()-1]*nums[nums.size()-2];
        
        if(v1>v2)
            return v1*nums[nums.size()-1];
        else if(v1<v2)
        {
            if(v2*nums[nums.size()-3] > v1*nums[nums.size()-1])
                return v2*nums[nums.size()-3];
            else
                return v1*nums[nums.size()-1];
        }
        else
            return nums[nums.size()-1]*v1;  
    }
};
