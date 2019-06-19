#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	char myArray[50];
	cout << "\n Enter Your Favorite String!\n      ";
	cin.getline(myArray, 50);
	s1.assign(myArray);
	cout << "\n Here Is Your Saying Twice!" << endl << endl;
	cout << "   " << myArray << endl;
	cout << "   " << s1 << endl << endl;
	return 0;
}
