class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int min_size = INT_MAX;
        int head = 0;
        int sum = 0;
        
        for(int tail = 0; tail<nums.size(); ++tail){
            sum = sum + nums[tail];
            //cout<<"sum1:"<<sum<<"  head:"<<head<<"  tail:"<<tail<<"  min:"<<min_size<<endl;
            while(sum>=s){   
                min_size = min(min_size, (tail-head+1));
                sum = sum - nums[head];
                ++head;
                //cout<<"sum2:"<<sum<<"  head:"<<head<<"  tail:"<<tail<<"  min:"<<min_size<<endl;
            }
        }
        if(min_size == INT_MAX)
            min_size = 0;
        return min_size;
    }
};