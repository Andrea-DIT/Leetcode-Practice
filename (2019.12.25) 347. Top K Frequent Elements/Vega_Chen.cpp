class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> stat;
        for(int i:nums) stat[i]++;
        
        vector<pair<int, int>> stat_sort(stat.begin(), stat.end());
        sort(stat_sort.begin(), stat_sort.end(), [](pair<int, int> &a, pair<int, int> &b){return a.second>b.second;});
        
        vector<int> ans(k, 0);
        for(int i = 0; i<k; ++i)
            ans[i] = stat_sort[i].first;
        
        return ans;
    }
};