class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int FrontIndex=0,EndIndex=A.size()-1;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0 && i!=EndIndex)
                continue;
            else if( i==EndIndex)
                break;
            else if(A[i]%2!=0 && i!=EndIndex){
                while(A[EndIndex]%2!=0){
                    EndIndex--;
                    if(EndIndex==i)
                        break;
                }
                if(EndIndex==i)
                    break; 
                int tmp=A[i];
                A[i]=A[EndIndex];
                A[EndIndex]=tmp; 
            }
                
        }
        return A;
    }
};