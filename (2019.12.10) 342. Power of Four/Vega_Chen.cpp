class Solution {
public:
    bool isPowerOfFour(int num) {
        int a = num;
        int power = 0;
        int powerOfFour = 1;
        
        while((a>>2)>0) {
            a = a>>2;
            ++power;            
        }
        //cout<<power<<endl;
        for(int i=0; i<power; ++i)
            powerOfFour *= 4;
        
        return (num == powerOfFour) ? true : false;
    }
};