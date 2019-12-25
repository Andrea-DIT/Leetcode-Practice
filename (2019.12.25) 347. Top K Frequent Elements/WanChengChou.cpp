class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map <int, int> counting;
        multimap<int, int, greater<int>> rev_table;
        for(int i=0; i<nums.size(); i++)
        {
            counting[nums[i]]++;
        }
        for(unordered_map <int, int>::iterator i=counting.begin(); i!= counting.end(); i++)
        {
            rev_table.insert(make_pair(i->second, i->first));
        }
        
        vector<int> answer;
        int j = 0;
        for(multimap <int, int>::iterator i=rev_table.begin(); j<k; i++)
        {
            j++;
            answer.push_back(i->second);
        }
        return answer;
    }
};