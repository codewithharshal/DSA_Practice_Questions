#include <iostream>
using namespace std;

int sumOfPrimeFactors(int n) {
    int sum = 0;
    
    // Check for factor 2
    while (n % 2 == 0) {
        sum += 2;
        n = n / 2;
    }
    
    // Check for odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += i;
            n = n / i;
        }
    }
    
    // If n is still greater than 1, then it's a prime factor
    if (n > 1) {
        sum += n;
    }
    
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sum of prime factors: " << sumOfPrimeFactors(num) << endl;
    
    return 0;
}