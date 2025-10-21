#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
	string name, proApp, sta, status, coursename;
	int course, location, days, num, regFee, lodgCost, lodg, total, discount, r;
	
	//quick reference for user
	cout << "S/N | Course          | Location"<< endl;
	cout << "-------------------------------------"<< endl;
	cout << " 1  | Photography     | Camp House A"<< endl;
	cout << " 2  | Painting        | Camp House B"<< endl;
	cout << " 3  | Fish Farming    | Camp House C"<< endl;
	cout << " 4  | Baking          | Camp House D"<< endl;
	cout << " 5  | Public Speaking | Camp House A" << endl << endl;
	
	//user input
	cout << "What's your name? ";
	getline(cin, name);
	cout << "Are you a PAU student? (1 = true, 0 = false) ";
	cin >> status;
	cout << "Enter course(1-5): ";
	cin >> course;
	cout << "Enter location(1-5): ";
	cin >> location;
	
	//std::string sng = status;
    num = std::stoi(status);
	
	//choice mapping for days and registration fee
	if (course == 1){
		days = 3;
		regFee = 10000;
		coursename = "Photography";
	}
	else if (course == 2){
		days = 5;
		regFee = 8000;
		coursename = "Painting";
	}
	else if (course == 3){
		days = 7;
		regFee = 15000;
		coursename = "Fish Farming";
	}
	else if (course == 4){
		days = 5;
		regFee = 13000;
		coursename = "Baking";
	}
	else if (course == 5){
		days = 2;
		regFee = 5000;
		coursename = "Public Speaking";
	}
	
	//choice mapping for lodging per day	
	if (location == 1){
		lodg = 10000;
	}
	else if (location == 2){
		lodg = 2500;
	}
	else if (location == 3){
		lodg = 5000;
	}
	else if (location == 4){
		lodg = 13000;
	}
	else if (location == 5){
		lodg = 5000;
	}
	
	//cost computation
	lodgCost = lodg * days;
	total = regFee + lodgCost;
	
	//discount processing system
	if ((num == 1) && (location==2 || location==3)){
		discount = total-(5/100);
		total=discount;
	}
	if ((days>5)||(regFee>12000)){
		discount = total-(3/100);
	}
	
	//random bonus calculation
	srand(time(0));
	r = rand() % 100 + 1;
	if (r == 7 || r == 77){
		total -= 500;
		proApp = "?500.00";
	}
	else{
		proApp = "None";
	}
	
	if (num == 1){
		sta = "Yes";
	}
	else {
		sta = "No";
	}
	
	//course registration output
	cout << endl << "========= Registration Slip =========" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Name: " << name << "     (PAU student: " << sta << ")" << endl;
	cout << "Course: " << coursename << "     Days: " << days << endl;
	cout << "Registration: N" << regFee << endl;
	cout << "Lodging: N" << lodg << " x " << days << "days = N" << lodgCost << endl;
	cout << "Random Draw: " << r << "         Promo applied: " << proApp << endl;
	cout << "TOTAL: N" << total;
}