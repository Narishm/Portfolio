#include "fPlayer.h"

bool fPlayer::operator > (fPlayer p) {
	if(feet > p.feet) {
		if(inches > p.inches) return true;
		else if(inches == p.inches) {
			if(weight > p.weight) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

void fPlayer::setHeight(int ft, int in) {
	feet = ft;
	inches = in;
}

void fPlayer::writeInfo() {
	cout << endl << setw(25) << name << setw(8) << feet << "' " << setw(3) << inches << "/" << setw(8) << weight << " pounds";
}
