class Solution {
public:
    bool isHappy(int n) {
        set<int> happy;
        while(happy.find(n) == happy.end()){
            happy.insert(n);
            int sum = 0;
            while(n!=0){
                int res = n%10;
                sum = sum + res*res;
                n = n/10;
            }
            n = sum;
            cout<<"sum:"<<sum<<endl;
        }
    if(n==1) return true;
    else return false;
    }
};