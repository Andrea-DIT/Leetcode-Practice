class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums)
    {
        int numsSize = nums.size();
        if(numsSize == 0) return 0;
        
        int startId = 0, endId = 0;
        int sum = 0;
        int minLength = numsSize + 1, curLength = numsSize + 1;
        while(endId < numsSize)
        {
            sum+=nums[endId];
            if(sum > s)
            {
                sum-=nums[startId];
                sum-=nums[endId];
                curLength = endId - startId + 1;
                startId++;
            }
            else if(sum < s)
            {
                endId++;
            }
            else
            {
                curLength = endId - startId + 1;
                endId++;
            }
            minLength = (minLength < curLength)? minLength : curLength;
        }
        if(minLength == numsSize + 1) return 0;
        else return minLength;
    }
};