#include <iostream>

using namespace std;

int main () {
	// Initializing Variables
	//int x = 4, y=2;
	int x, y;
	
	//User-Input
	cout << "Enter A Value for X: ";
	cin >> x;
	cout << "Enter A Value for Y: ";
	cin >> y;
	
	// Initializing Formulas
	int sum = x + y; 
	int difference = x - y; 
	int product = x * y; 
	float quotient = x / y;
	int remainder = x % y;
	
	// Output of Procedure
	cout << "Sum: x + y = " << sum << endl;
	cout << "Difference: x - y = " << difference << endl;
	cout << "Product: x * y = " << product << endl;
	cout << "Quotient: x/y = " << quotient << endl;
	cout << "Remainder: x % y = " << remainder << endl;
	
	return 0;
}
