class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1, 0);
        int power_of_two = 1;
        
        for (int i=1; i<ans.size(); i++) {
            if (i == power_of_two) {
                ans[i] = 1;
                power_of_two *= 2;
                
            } else if (i%2 == 0) {
                ans[i] = ans[int(i/2)];
                
            } else {
                ans[i] = ans[int(i/2)]+1;
            }
        }
        
        return ans;
    }
};
