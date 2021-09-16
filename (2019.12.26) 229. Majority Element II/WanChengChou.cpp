class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int size = nums.size();
        if(size < 2) return nums;
        int target_num = size / 3 + 1;
        sort(nums.begin(), nums.end());
        
        vector<int> answer;
        int candidate, count = 0;
        for(int i=0; i<size; i++)
        {
            if(nums[i] != candidate)
            {
                candidate = nums[i];
                count = 1;
            }
            else count++;
            
            if(count == target_num)
            {
                answer.push_back(candidate);
            }
            if(answer.size() == 2 || count == size * 2 / 3 + 1)
            {
                return answer;
            }
        }
        return answer;
    }
};