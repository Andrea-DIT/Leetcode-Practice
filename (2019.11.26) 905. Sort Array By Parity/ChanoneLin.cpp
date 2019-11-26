class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even(A.size()), odd(A.size());        
        int evenpos=0,oddposs=0;
        
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){                
                even[evenpos]=A[i];
                evenpos=evenpos+1;
            }
            else{
                odd[oddposs]=A[i];
                oddposs=oddposs+1;
            }
            
        }        
        vector<int> result(A.size());
        for(int p=0;p<evenpos;p++){
            result[p]=even[p];
        }
        for(int q=0;q<oddposs;q++){
            result[evenpos+q]=odd[q];
        }
        return result;
    }
};
