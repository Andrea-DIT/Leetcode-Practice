class Solution {
public:
    
    bool static compare_by_value(pair<int, int>& pair1, pair<int, int> &pair2)
    {
        return pair1.second > pair2.second; 
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        map<int, int> hashtable;
        
        for(int i = 0; i < nums.size(); i++)
            hashtable[nums[i]] += 1;
        
        vector<pair<int, int>> vect_hash(hashtable.begin(), hashtable.end());
        sort(vect_hash.begin(), vect_hash.end(), compare_by_value);
           
        for(int j = 0; j < k; j++)
            ans.push_back(vect_hash[j].first);
        
        return ans;
    }
};
