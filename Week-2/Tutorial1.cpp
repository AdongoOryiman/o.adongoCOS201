#include <iostream>
#include <cmath>  // Required for sqrt()
using namespace std;

int main(){
	// Declare variables
    double Adj, Opp, squareAdj, squareOpp, Hyp;
    
    cout << "Enter the adjacent side: ";
    cin >> Adj;
    
    cout << "Enter the opposite side: ";
    cin >> Opp;

    // Square using multiplication
    squareAdj = Adj * Adj;
    squareOpp = Opp * Opp;

    // Square root using sqrt() function
    Hyp = sqrt(squareAdj + squareOpp);

    cout << "The hypothenus is " << Hyp << endl;

    return 0;

}