class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count_map;
        
        for (int i=0; i<nums.size(); ++i) {
            count_map[nums[i]]++;
            
            if ( count_map[nums[i]] > nums.size()/2 ) {
                return nums[i];
            }
        }
        
        return nums[0];
    }
};
