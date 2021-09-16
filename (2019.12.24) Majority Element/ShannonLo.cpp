class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<=2) return nums[0];
        else
        {
            int i = floor(nums.size()/2);
            
            while(i<nums.size())
            {
                if(count(nums.begin(), nums.end(), nums[i]) <= floor(nums.size()/2))
                    i++;
                else
                    break;
            }

            return nums[i];
        }
    }
};