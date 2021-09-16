class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> Stk;
        
        for(char c:S){
            if(Stk.empty() || c!=Stk.top()) 
                Stk.push(c);
            else 
                Stk.pop();    
        }
        
        string ans(Stk.size(), ' ');     
        for(int i =Stk.size()-1; i>=0; --i){
            ans[i] = Stk.top();
            Stk.pop();
        }
        
        return ans;
    }
};