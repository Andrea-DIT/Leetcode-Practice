class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int JewelNum=0;
        for(int i=0;i<J.length();i++){
            //size_t pch=S.find(J[0]);
            JewelNum+=count(S.begin(),S.end(),J[i]);
        }
        return JewelNum;
    }
};