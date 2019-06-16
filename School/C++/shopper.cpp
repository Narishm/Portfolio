#include "shopper.h"
using namespace std;

float shopper::getMoneyFromWallet(float cost) {
	if(cost > wallet)	{
		cout << "\n Not enough money!  Put something back! \n\n";
		return 0;
	}
	else {
		wallet = wallet - cost;
		return cost;
	}
}
