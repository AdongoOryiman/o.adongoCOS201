#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double Bal, Int;

	// Get user input
	cout << "Interest Calculation Program \n";
    cout << "Enter starting balance: ";
    cin >> Bal;

    cout << "Enter annual interest rate(%): ";
    cin >> Int;

    // Calculate Annual Balance
    cout << "Balance After One Year: " << Bal * (1 + Int / 100.0) << endl;

    return 0;
}