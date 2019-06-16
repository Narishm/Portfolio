#ifndef _FPLAYER_H
#define _FPLAYER_H
#include <string.h>
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#include <stdlib.h>
using namespace std;

class fPlayer {
	private:
		int weight, feet, inches, totalinches;
		char name[25];
	public:
		fPlayer() {cout << "\n I'm in the Constructor.";};
		void setName(char* n) {strcpy(name, n);}
		void setWeight(int w) {weight = w;}
		void setHeight(int ft, int in);
		void writeInfo();
		bool operator > (fPlayer p);
};
#endif
