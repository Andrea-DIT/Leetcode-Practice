class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<int> primes = {2};
        int counter = 1;
        for(int i = 1; i < n; i++){
            counter = isPrime(i, primes)? counter+1 : counter;
        }
        return counter;
    }
    
    bool isPrime(int val, vector<int> &primes){
        if(val==1) return false;
        if(val==2) return false;
        int boundary = int(sqrt((double)val)) + 1;
          
        for(int i = 0; i < primes.size(); i++){
            if (primes[i] > boundary) break;
            if(val % primes[i] == 0) return false;
        }
        primes.push_back(val);
        return true;
    }
};