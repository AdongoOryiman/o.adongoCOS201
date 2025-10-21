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
    double AnnBal = Bal * (1 + Int / 100.0);

    // Calculate Annual Balance
    cout << "Balance After One Year: " << AnnBal << endl;
    // Calculate for Second Year
    cout << "Balance After Two Year: " << AnnBal*AnnBal << endl;

    return 0;
}