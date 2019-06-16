#include <iostream>
#include <string>
using namespace std;

struct date {
	int month;
	int day;
	int year;
};

struct person {
	string name;
	date bDay;
};

person fillPerson();
void writePerson(person);
void whoIsOlder(person, person);

int main() {
	person person1, person2;
	cout << "\n --Birthday Information--\n\n";
	person1 = fillPerson();
	person2 = fillPerson();
	whoIsOlder(person1, person2);
	return 0;
}

person fillPerson() {
	person person;
	char slash;
	static int pnum = 1;
	cout << " What is the Name of Person " << pnum << "?\n\n      ";
	cin >> person.name;
	cout << "\n What is the Person's Birthday? (Use Format: 4/14/1992)\n\n      ";
	cin >> person.bDay.month >> slash >> person.bDay.day >> slash >> person.bDay.year;
	cout << endl << endl;
	++pnum;
	return person;
}

void writePerson(person person) {
	static int pnum = 1;
	string month;
	switch(person.bDay.month) {
		case 1:
			month = "January";
			break;
		case 2:
			month = "Febuary";
			break;
		case 3:
			month = "March";
			break;
		case 4:
			month = "April";
			break;
		case 5:
			month = "May";
			break;
		case 6:
			month = "June";
			break;
		case 7:
			month = "July";
			break;
		case 8:
			month = "August";
			break;
		case 9:
			month = "September";
			break;
		case 10:
			month = "October";
			break;
		case 11:
			month = "November";
			break;
		case 12:
			month = "December";
			break;
	}
	cout << "\n\n   --Info on Person " << pnum << " --\n" <<
	"\n       Name  : " << person.name <<
	"\n    Birthday : " << month << " " << person.bDay.day << ", " << person.bDay.year << endl << endl;
	++pnum;
}

void whoIsOlder(person person1, person person2) {
	if(person1.bDay.year > person2.bDay.year) {
		cout << " --Younger Person-- ";
		writePerson(person1);
		cout << " --Older Person-- ";
		writePerson(person2);
	}
	else if(person2.bDay.year > person1.bDay.year) {
		cout << " --Younger Person-- ";
		writePerson(person2);
		cout << " --Older Person-- ";
		writePerson(person1);
	}
	else if(person1.bDay.year == person2.bDay.year) {
		if(person1.bDay.month > person2.bDay.month) {
			cout << " --Younger Person-- ";
			writePerson(person1);
			cout << " --Older Person-- ";
			writePerson(person2);
		}
		else if(person2.bDay.month > person1.bDay.month) {
			cout << " --Younger Person-- ";
			writePerson(person2);
			cout << " --Older Person-- ";
			writePerson(person1);
		}
		else if(person1.bDay.month == person2.bDay.month)	{
			if(person1.bDay.day > person2.bDay.day)	{
				cout << " --Younger Person-- ";
				writePerson(person1);
				cout << " --Older Person-- ";
				writePerson(person2);
			}
			else if(person2.bDay.day > person1.bDay.day) {
				cout << " --Younger Person-- ";
				writePerson(person2);
				cout << " --Older Person-- ";
				writePerson(person1);
			}
			else {
				cout << " --The People Are The Same Age-- ";
				writePerson(person1);
				writePerson(person2);
			}
		}
	}
}
