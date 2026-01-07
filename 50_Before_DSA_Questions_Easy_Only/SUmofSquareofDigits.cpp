#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sum of squares of digits: " << sumOfSquares(num) << endl;
    
    return 0;
}