#include <iostream.h>
using namespace std;

int main() {
	int divisor, dividend, product, remainder;
	float fProduct, fremainder;
	cout << "\n This program will demonstrate the division and modulus operations." << endl;
//Dividend
	cout << "\n\n Please enter the dividend: ";
	cin >> dividend;
//Divisor
	cout << "\n\n Please enter the divisor: ";
	cin >> divisor;
//Product for Integer
	product = dividend / divisor;
//Modulus for Integer
	remainder = dividend % divisor;
//Display Results for Integer
	cout << "\n\n The result of the division with the integer is: " << product << "." << "\n The result of the modulus with integer is: " << remainder << "." << endl;
//Product for Float
	fProduct = dividend / divisor;
//Modulus for Float
	fremainder = dividend % divisor;
//Results for Float
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << "The result of the division with the float is: " << fProduct << "." << "\n The result of the modulus with float is: " << fremainder << "." << endl;
	return 0;
}
