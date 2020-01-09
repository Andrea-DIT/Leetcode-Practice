class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;
        int now = 0;
            
        while(now<=right)
        {
            if(nums[now]==0)
            {
                swap(nums[now], nums[left]);
                left++;
                now++;
            }
            else if(nums[now]==1)
                now++;
            else if(nums[now]==2)
            {
                swap(nums[now], nums[right]);
                right--;
            }
        }
    }
};
