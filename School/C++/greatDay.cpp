#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1("What A Great Day."), s2, s3;
	char MyOldString[20] = "Howdy Partner";
	string s4(MyOldString);
	s2 = "Do You Love C++?";
	s3 = s1 + s2;
	cout << "\n          S1 = " << s1;
	cout << "\n          S2 = " << s2;
	cout << "\n          S3 = " << s3;
	cout << "\n          S4 = " << s4;
	cout << "\n MyOldString = " << MyOldString << endl;
	if(s1 > s2) {cout << "\n S1 Is Greater Than S2";}
	else {cout << "\n S1 Is Not Greater Than Or The Same As S2";}
	s1 = "\n\n All Done With Strings!\n";
	cout << s1 << endl;
	return 0;
}
