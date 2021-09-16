class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int cont;
        cont=0;
        for(int i=0;i<J.length();i++){
            for(int j=0;j<S.length();j++){
                char JJ=J[i];
                char SS=S[j];
            if (JJ==SS){    cont=cont+1;        }
        }
        }
        return(cont);
    }
};
