#include <iostream.h>
using namespace std;

int main() {
	char text1[15], text2[15],text3[15];
	cout << "\n Who Do You Love? \n\n";
	cout << "\n Using getline(text1, 14, 'C') Enter ==> I Love C++!\n\n      ";
	cin.getline(text1, 14, 'C');
	cin.ignore(20, '\n');
	cout << "\n                         Output Text ==> " << text1 << endl;
	cout << "\n Using cin >> text2            Enter ==> I Love C++!\n\n      ";
	cin >> text2;
	cin.ignore(20, '\n');
	cout << "\n                         Output Text ==> " << text2 << endl;
	cout << "\n Using getline(text3, 14)      Enter ==> I Love C++!\n\n      ";
	cin.getline(text3, 14);
	cout << "\n                         Output Text ==> " << text3 << endl;
	cout << "\n\n      Don't You Love C++?\n" << endl;
	return 0;
}
