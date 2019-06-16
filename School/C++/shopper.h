#ifndef _SHOPPER_H
#define _SHOPPER_H
#include "cart.h"

class shopper {
	private:
		float wallet;
	public:
		shopper() {wallet = 100.00;}   
		cart squeakyWheels;
		float getMoneyFromWallet(float);
};
#endif
