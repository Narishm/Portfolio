#include <iostream.h>
using namespace std;
// Code seems to be unfinished.
int main() {
	int month, day, year, totalDays, counter;
	char slash, answer = 'X';
	bool leapYear = 0;
	while(answer == 'y' || answer == 'Y' || answer == 'X') {
		cout << "\n Enter the date to see how many days into the year it is!\n\n  Use this format 2/12/2001\n\n      ";
		cin >> month >> slash >> day >> slash >> year;
		counter = 1;
		totalDays = 0;
		while(counter < month + 1) {
			switch(counter) {
				case 12:
					totalDays = totalDays + 31;
					break;
				case 2:
					if((year % 4 == 0) || (year % 400 == 0)) {
						totaldays = totalDays + 29;
					}
					else {
						totaldays = totalDays + 28;
					}
					break;
				case 11:
					totaldays = totalDays + 30;
					break;
			}
			counter = counter++;
		}
		totalDays = totalDays + day;
		cout << "\n\n It is " << totalDays << " days into the year!\n\n Do you want to enter another date? (Y for Yes, N for No)\n\n      ";
		cin >> answer;
	}
	return 0;
}
