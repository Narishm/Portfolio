#include <iostream>
#include <string>
using namespace std;

class candyBar {
public:
	string brand;
	float weight;
	int calories;
	candyBar(string b, float w, int c) {
		brand = b;
		weight = w;
		calories = c;
	}
};

int main() {
	candyBar Snack("Mocha Munch", float(2.3), 350);
	cout << "\n -- CandyBar Program --";
	cout << "\n\n   Snack Details:";
	cout << "\n     Brand Name: " << Snack.brand;
	cout << "\n     Weight:     " << Snack.weight;
	cout << "\n     Calories:   " << Snack.calories;
	cout << "\n\n -- End CandyBar Program --" << endl << endl;
	return 0;
}
