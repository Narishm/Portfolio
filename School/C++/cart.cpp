#include "cart.h"

item cart::retrieveNextItem() {
	item next;
	next = stuff[whichItem];
	++whichItem;
	return next;
}

void cart::addItemToCart(item newThing)
{
	stuff[howMany] = newThing;
	++howMany;
}
