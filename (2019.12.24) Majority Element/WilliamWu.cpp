class Solution {
public:
    int majorityElement(vector<int>& nums) {
  
        map<int, int> table;
        int thresh = nums.size()/2;
        int ans = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            table[nums[i]]++;
            if(table[nums[i]] > thresh)
            {
                ans = nums[i];
                break;
            }
        }
        
        return ans;
    }
};
