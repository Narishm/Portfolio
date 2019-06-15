#include <iostream.h>

void getPetInfo(bool*, int*, bool*, int*);
void writePetInfo(bool, int, bool, int);

int main() {
	bool bDog, bCat;
	int dogNum, catNum;
	getPetInfo(&bDog, &dogNum, &bCat, &catNum);
	writePetInfo(bDog, dogNum, bCat, catNum);
	if(bDog || bCat) {
		cout << "\n Don't you just love owning pets?\n" << endl;
	}
	return 0;
}

void getPetInfo(bool *pbDog, int *pDogNum, bool *pbCat, int *pCatNum) {
	char answer;
	*pbDog = false;
	*pbCat = false;
	*pDogNum = 0;
	*pCatNum = 0;
	cout << "\n Do you have any dogs? (Y = Yes, N = No)\n\n      ";
	cin >> answer;
	if(answer == 'Y' || answer == 'y') {
		cout << "\n\n How many dogs do you have?\n\n      ";
		cin >> *pDogNum;
		*pbDog = true;
	}
	cout << "\n Do you have any cats? (Y = Yes, N = No)\n\n      ";
	cin >> answer;
	if(answer == 'Y' || answer == 'y') {
		cout << "\n\n How many cats do you have?\n\n      ";
		cin >> *pCatNum;
		*pbCat = true;
	}
}

void writePetInfo(bool bDog, int dogNum, bool bCat, int catNum) {
	cout << "\n\n Dog and Cat ownership data:";
	if(bDog == true) {
		cout << "\n\n    You Own " << dogNum << " dogs." << endl;
	}
	else {
		cout << "\n\n    You don't own any dogs." << endl;
	}
	if(bCat == true){
		cout << "\n    You Own " << catNum << " cats." << endl;
	}
	else {
		cout << "\n    You don't own any cats." << endl;
	}
}
