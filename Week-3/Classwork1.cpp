#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "Input any integer: ";
	cin >> input;
	if (input%5==0){
		cout << "HiFive";
	}
	if (input%2==0){
		cout << "HiEven";
	}
	return 0;
} 