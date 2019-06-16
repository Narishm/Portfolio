#include <iostream.h>
#include <iomanip.h>
using namespace std;

int main () {
	double pi = 3.141592653589793;
	double feetInAMile = 5290.0;
	double sqFtInAcre = 43560;
	char getty[15] = "4 Score and 7";
	cout << "\nExample 2 - Output using manipulators." << endl;
//Writing all 4 values
	cout << "\n1. Write out the values." << endl;
	cout << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << ", Gettysburg = " << getty << endl;
//Set the fixed flags in the output stream
	cout << "\n2. Set fixed showpoint and precision 4.\n";
	cout << setiosflags(ios::fixed | ios::showpoint) << se0tprecision(4) << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << ", Gettysburg = " << getty << endl;
//Justification
	cout.setf(ios::left);
	cout << "\n3. Text will be written with left justification, ios::left works on variables too!\n" << "\n=========|=========|=========|=========|=========|=========|=========";
	cout << setw(20)  << "\nGettysburg = " << setw(20) << getty << setw(20) << "\nSqFt/AcresPi = " << setw(20) << sqFtInAcre << endl;
	cout.unsetf(ios::left);
	cout.setf(ios::right);
	cout << "\n4. Unset left justification and set right justification.\n" << "\n=========|=========|=========|=========|=========|=========|=========";
	cout << setw(20)  << "\nGettysburg = " << setw(20) << getty << setw(20) << "\nSqFt/AcresPi = " << setw(20) << sqFtInAcre << endl;
	return 0;
}
