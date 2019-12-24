class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int, int> counting;
        int answer;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            if(++counting[nums[i]] > size/2)
            {
                answer = nums[i];
                continue;
            }
        }
        return answer;
    }
};