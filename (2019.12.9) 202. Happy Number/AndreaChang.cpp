class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> sum_of_square = {0};
        while (true) {
            // compute sum of square of digits
            int sum = 0;
            while(n!=0){
                sum += pow(n % 10, 2);
                n = n/10;
            }

            if (sum == 1) return true;
            if (sum_of_square.find(sum) != sum_of_square.end() ) break;
            
            sum_of_square.insert(sum);            
            n = sum;
        }

        return false;
    }
};