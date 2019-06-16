#include "cart.h"
#include "clerk.h"
#include "shopper.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main() {
	cout << "\n --Shopper Program w/Error Handling--\n";
	shopper shopEd;
	clerk shopGladys;
	float howMuchEdOwes, payOut;
	int items, i;
	item lemmeSeeIt[5];
	try {
		ifstream input;
		input.open("stuffToBuy.dat", ios::in);
		if(!input) throw 0;
		char buf[50], junk;
		input.getline(buf, 50);
		items = atoi(buf);
		for(i = 0; i < items; ++i) {
			input.getline(buf, 50);
			lemmeSeeIt[i].name = buf;
			input >> lemmeSeeIt[i].price;
			input >> lemmeSeeIt[i].number;
			if(lemmeSeeIt[i].number < 1) throw 1;
			input.get(junk);
			shopEd.squeakyWheels.addItemToCart(lemmeSeeIt[i]);
		}
	}
	catch(int err) {
		if(err == 0) {
			cout << "\n File Not Found!" << endl;
		}
		else if(err == 1) {
			cout << "\n Quantity Cannot Be Zero!" << endl;
		}
		else {
			try {
				throw 0;
			}
			catch(...) {
				cout << "\n An Unknown Error Has Occured!" << endl;
			}
		}
	}
	catch(...) {
		cout << "\n An Unknown Error Has Occured!" << endl;
	}
	howMuchEdOwes = shopGladys.figureTotal(&shopEd.squeakyWheels);
	cout << "\n Ed owes Gladys $" << howMuchEdOwes << ".";
	payOut = shopEd.getMoneyFromWallet(howMuchEdOwes);
	cout << "\n Ed can pay Gladys $" << payOut << ".";
	cout << "\n\n Shopping is hard work! \n\n";
	return 0;
}
