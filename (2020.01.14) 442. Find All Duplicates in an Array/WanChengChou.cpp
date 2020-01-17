class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int> answer;
        if(nums.size() <= 1) return answer;
        
        for(int i=0; i<nums.size(); i++)
        {
            int id = abs(nums[i]) - 1;
            if( nums[id] > 0) nums[id] *= -1;
            else answer.push_back(abs(nums[i]));
        }
        return answer;
    }
};