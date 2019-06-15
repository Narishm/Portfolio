#ifndef _CART_H
#define _CART_H
#include <iostream>
using namespace std;

class item {
public:
	string name;
	float price;
	int number;
};

class cart {
private:
	item stuff[50];
	int howMany;
	int whichItem;
public:
	cart() {howMany = 0;  whichItem = 0;}
	void addItemToCart(item newThing);
	item retrieveNextItem();
	int howManyInCart() {return howMany;}
};
#endif
