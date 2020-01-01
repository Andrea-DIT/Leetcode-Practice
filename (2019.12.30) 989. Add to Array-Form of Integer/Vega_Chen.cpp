class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> ans;
        int temp = K;
        int i = A.size();
        
        while(--i>=0 || temp>0){
            if(i>=0) temp+=A[i];
            ans.push_back(temp%10);
            temp/=10;
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};