class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int thred = nums.size()/2;
        for(int i:nums){
            umap[i]++;
            if (umap[i]>thred) return i;
        }
        
        return 0;
    }
};