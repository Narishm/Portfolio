#include <iostream.h>
using namespace std;

int main () {
	double pi = 3.141592653589793;
	double feetInAMile = 5280.0;
	int sqFtInAcre = 43560;
	cout << "\n Example 1 - Output and cout functions. " << endl;
//Writing out all 3 values
	cout << "\n\n First, we write out all 3 values." << endl;
	cout << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << endl;
//Setting showpoint to see feet in a mile decimal point
	cout << "\n\n Now set the showpoint to see the decimal point in feet in a mile.\n";
	cout.setf(ios::showpoint);
	cout << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << endl;
//Setting fixed flag and precision of 3
	cout << "\n\n Now set fixed and precision of 3.  We'll see .xxx in doubles.\n";
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << endl;
//Unsetting the fixed flag to see just the 3 digits
	cout << "\n\n Now unset the fixed flag and we'll just see the 3 digits.\n";
	cout.unsetf(ios::fixed);
	cout << "\n Pi = " << pi << ", Square Feet in an Acre = " << sqFtInAcre << ", Feet in a Mile " << feetInAMile << endl;
	return 0;
}
