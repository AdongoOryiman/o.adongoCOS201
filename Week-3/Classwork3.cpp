#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int num1, num2, temp, ans, orgAns;
	srand(time(0));
	num1 = rand() % 10;
	num2 = rand() % 10;
	if (num1 < num2) {
		temp = num1;
    	num1 = num2;
    	num2 = temp;
	}
	orgAns = num1 - num2;
	cout << "What is " << num1 << "-" << num2 << "? ";
	cin >> ans;
	if (ans == orgAns){
		cout << "You got it!";
	}
	else {
		cout << "You didn't get it";
	}
	return 0;
}