#include <iostream>
using namespace std;

int main() {
	int input;
	cout << "What is your age? ";
	cin >> input;
	if (input>=18){
		cout << "You are an adult";
	}
	if (input<18){
		cout << "You are NOT an adult";
	}
	return 0;
} 