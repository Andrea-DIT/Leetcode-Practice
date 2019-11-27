class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {       
        
        int i,j,k;
        for(i=0;i<A.size();i++){            
            for(j=0,k=A[i].size()-1;j<k;j++,k--){                
                int tmp=A[i][j];
                A[i][j]=A[i][k];
                A[i][k]=tmp;
                }               
        }
        for(i=0;i<A.size();i++){
            for(j=0;j<A[0].size();j++){
                if(A[i][j]==0)
                    A[i][j]=1;
                     else
                     A[i][j]=0;
                
            }
        }
            
        return A;
        
    }
};