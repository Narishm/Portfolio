#include <iostream.h>
using namespace std;

int main() {
	int number;
	char answer = 'X';
	while(answer == 'y' || answer == 'Y' || answer == 'X') {
		cout << "\n Enter a number between 1 and 100.\n\n      ";
		cin >> number;
		if(number < 1 || number > 99) {
			cout << "\n\n Number is out of range!" << endl;
		}
		else {
			if(number > 0 && number < 10) {
				cout << "\n\n The number is 1 digit big!" << endl;
			}
			else {
				cout << "\n\n The number is 2 digits big!" << endl;
			}
		}
		cout << "\n\n Do you want to enter another number? (Y for Yes, N for No)\n\n      ";
		cin >> answer;
	}
	return 0;
}
