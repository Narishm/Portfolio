#include <iostream.h>

int main() {
	char input;
	int value;
	cout << "\n  Please Enter a Character:\n\n      ";
	cin >> input;
	value = (int)input;
	if(value == 32) cout << "\n\n You Entered A Space!" << endl;
	else if(value > 32 && value < 48 || value > 57 && value < 65 || value > 90 && value < 97 || value > 122 && value < 127) {
		cout << "\n\n You Entered A Symbol!" << endl;
	}
	else if(value > 47 && value < 58)	cout << "\n\n You Entered A Number!" << endl;
	else if(value > 64 && value < 91 || value > 96 && value < 123) cout << "\n\n You Entered A Letter!" << endl;
	else cout << "\n\n You Entered A Special Character!" << endl;
	return 0;
}
