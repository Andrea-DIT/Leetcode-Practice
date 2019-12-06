class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        int size = nums.size();
        
        if(size==0)
            return 0;
        
        int start = 0;
        int sum = 0;
        int ans = INT_MAX;
        
        for(int end = 0; end < size; end++)
        {
            sum += nums[end];
            while(sum >= s && start <= end)
            {
                ans = min(ans, end-start+1);
                sum -= nums[start];
                start++;
            }
        }
        
        if(ans==INT_MAX)
            return 0;
        else
            return ans;
    }
};
