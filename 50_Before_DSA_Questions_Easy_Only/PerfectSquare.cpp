#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false;
    
    int root = sqrt(num);
    return root * root == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isPerfectSquare(n)) {
        cout << n << " is a perfect square." << endl;
    } else {
        cout << n << " is not a perfect square." << endl;
    }
    
    return 0;
}