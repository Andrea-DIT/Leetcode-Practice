class Solution {
public:
    void sortColors(vector<int>& nums) {
        int idx = 0;
        int lhs = 0;
        int rhs = nums.size()-1;
        
        while (idx <= rhs) {
            if ( nums[idx] == 0 ) {
                swap(nums[idx], nums[lhs]);
                lhs++;
                idx++;
                
            } else if (nums[idx] == 2) {
                swap(nums[idx], nums[rhs]);
                rhs--;
                
            } else {
                idx++;
            }
        }
    }
    
    void swap(int& a, int& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
};
