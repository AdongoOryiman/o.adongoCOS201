#include <iostream>
using namespace std;

int main() {
    int x, y, temp;

    // Read input from user
    cout << "Enter first integer: ";
    cin >> x;

    cout << "Enter second integer: ";
    cin >> y;

    // Display original values
    cout << "\nBefore swapping:\n";
    cout << "The first integer is " << x << ", and the second integer is " << y;

    // Swap using a temporary variable
    temp = x;
    x = y;
    y = temp;

    // Display swapped values
    cout << "\nAfter swapping:\n";
    cout << "The first integer is " << x << ", and the second integer is " << y;

    return 0;
}