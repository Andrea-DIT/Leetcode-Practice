

class Solution {
   
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
         while (checkzero(stones) != n && checkzero(stones) != n-1) {        
         if(stones[n-2]==stones[n-1]){
             stones[n-2]=0;   
             stones[n-1]=0;}
               else{
               stones[n-1]=stones[n-1]-stones[n-2];
               stones[n-2]=0;}    
            
         }
        if(stones[n-1]==0)
             return stones[0];       
            else
                return stones[n-1];
                
    }
    
    int checkzero(vector<int>& stones) {
    sort(stones.begin(), stones.end()); 
    int cont = 0, n = stones.size();
    for (int i=0; i<n; i++) {
        if (stones[i] == 0) {
            cont++;
        }
    }
    return cont;
}
    
};

