class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int, int> counting;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            if(++counting[nums[i]] > size/2)
            {
                return nums[i];
            }
        }
        return nums[0];
    }
};
