#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    // Calculate N-th triangular number
    int triangular = n * (n + 1) / 2;
    
    cout << "The " << n << "-th triangular number is: " << triangular << endl;
    
    return 0;
}