#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the sum of proper divisors of n
long long sumOfProperDivisors(long long n) {
    if (n == 1) return 0; // 1 has no proper divisors
    
    long long sum = 1; // 1 is always a proper divisor
    
    // Check divisors from 2 to sqrt(n)
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i; // i is a divisor
            
            // If i is not the square root, add the corresponding divisor (n/i)
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    
    return sum;
}

int main() {
    int m;
    std::cin >> m;
    
    for (int i = 0; i < m; i++) {
        long long n;
        std::cin >> n;
        
        if (sumOfProperDivisors(n) == n) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
    
    return 0;
}