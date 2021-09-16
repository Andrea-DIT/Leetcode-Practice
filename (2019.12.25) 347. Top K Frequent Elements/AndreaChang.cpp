class Solution {
public:
    
    bool static compareByValue(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second > p2.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // hash table of nums
        map<int, int> hash_map;
        for (int i=0; i<nums.size(); ++i) {
            hash_map[nums[i]]++;
        }
        
        // hash map to vector, and sort by value
        // Note: take a look std::sort
        vector<pair<int, int>> num_frequent_vec(hash_map.begin(), hash_map.end());
        sort(num_frequent_vec.begin(), num_frequent_vec.end(), compareByValue);
        
        // find top K frequent elements
        vector<int> top_k(k);
        for (int i=0; i<k; ++i) {
            top_k[i] = num_frequent_vec[i].first;
        }
        
        return top_k;
    }
};
