#include "cart.h"
#include "clerk.h"

float clerk::figureTotal(cart *pCart) {
	int i, checkOutTotal, scanned = 0;
	float tax;
	item theItem;
	checkOutTotal = pCart->howManyInCart();
	cout << " \n  --Scanning Items--" << endl << endl;
	for(i = 0; i < checkOutTotal; ++i) {
		theItem = pCart->retrieveNextItem();
		total = (theItem.price * theItem.number) + total;
		cout << "   Item " << i + 1 << ": " << theItem.name << endl;
		cout << "   Price: " << theItem.price << endl;
		cout << "   Quantity: " << theItem.number << endl << endl;
		scanned = theItem.number + scanned;
	}
	cout << " Number of Items Scanned: " << scanned << endl;
	tax = total * .05;
	cout << " Total: " << total << endl;
	cout << " Tax: " << tax << endl;
	total = tax + total;
	cout << " Final Total: " << total << endl;
	return total;
}
