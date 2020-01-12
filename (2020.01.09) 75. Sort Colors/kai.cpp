class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0, count_1 = 0, count_2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0) count_0++;
            if (nums[i] == 1) count_1++;
            if (nums[i] == 2) count_2++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if (i < count_0) nums[i] = 0;
            else if (i < count_0 + count_1) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};