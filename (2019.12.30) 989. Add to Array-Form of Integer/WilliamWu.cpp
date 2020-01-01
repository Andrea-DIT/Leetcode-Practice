class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        
        queue<int> queue_K;
        stack<int> stack_A;
        vector<int> ans;
        stack<int> tmp;
        
        while(K>0)
        {
            int digit = K%10;
            queue_K.push(digit);
            K /= 10;
        }
        
        for(int i = 0; i < A.size(); i++)
            stack_A.push(A[i]);
        
        int carry = 0;
        while(queue_K.size()>0 || stack_A.size()>0 || carry>0)
        {
            int num1 = 0;
            if(queue_K.size()>0)
                num1 = queue_K.front();
            int num2 = 0;
            if(stack_A.size()>0)
                num2 = stack_A.top();
            
            int sum = num1 + num2 + carry;
            carry = sum/10;
            sum %= 10;
            tmp.push(sum);
                
            if(queue_K.size()>0)
                queue_K.pop();
            if(stack_A.size()>0)
                stack_A.pop();
        }
        
        while(tmp.size()>0)
        {
            ans.push_back(tmp.top());
            tmp.pop();
        }
        
        return ans;
    }
};
