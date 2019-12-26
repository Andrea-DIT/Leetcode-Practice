class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int size = nums.size();
        int target_num = size / 3 + 1;
        unordered_map<int, int> counting;
        vector<int> answer;
        for(int i=0; i<size; i++)
        {
            counting[nums[i]]++;
            int cur_count = counting[nums[i]];
            if(answer.size() < 2 && cur_count == target_num)
            {
                answer.push_back(nums[i]);
            }
            if((answer.size() == 2) || (answer.size() != 2 && cur_count == size * 2 / 3 + 1))
            {
                return answer;
            }
        }
        return answer;
    }
};