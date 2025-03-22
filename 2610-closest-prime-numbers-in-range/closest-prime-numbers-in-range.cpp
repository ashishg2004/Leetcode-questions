class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {  // Optimized check up to sqrt(n)
            if (n % i == 0) return false;
        }
        return true;
    }

    // Function to find the closest prime pair
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        
        // Collect all prime numbers in the range [left, right]
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }
        
        // If there are fewer than 2 primes, return [-1, -1]
        if (primes.size() < 2) return {-1, -1};
        
        // Find the closest prime pair with the smallest difference
        int minDiff = INT_MAX;
        vector<int> result(2, -1);

        for (size_t i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }
        
        return result;
    }
};
