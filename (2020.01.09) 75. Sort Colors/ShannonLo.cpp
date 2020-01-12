class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        if(nums.size()>1)
        {
            int idx = 0, zeros = 0, end = nums.size() - 1;
            
            while(idx<=end && zeros<=end) 
            {
                if(nums[idx]==2) 
                {
                    swap(nums[idx], nums[end]);
                    --end;
                }
                if(nums[idx]==0)
                {
                    swap(nums[zeros], nums[idx]);
                    ++zeros;
                }
                if(idx<zeros || nums[idx]== 1)
                    idx++;
            }
        }
    }
};