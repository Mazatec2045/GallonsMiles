// Omar Vergara
// 2/17/2024

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
    // Variables
	double gallons; // gas tank capacity in gallons
	double miles;   // miles per 1 tank of gas
	double mileage; // calculated miles in gallon 

	// prompts
	cout << "How many gallons can the car hold? "; 
	cin >> gallons; 

	cout << "How many miles can I drive? ";
	cin >> miles; 

	// calculation
	mileage = (miles / gallons);
	
	cout << showpoint << setprecision(2) << fixed; 
	cout << "This car gets " << mileage << " miles per gallon.\n"; 

	return 0;

}

