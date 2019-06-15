#include <iostream>
#include <string>
using namespace std;

class candyBar {
	public:
		string brand;
		float weight;
		int calories;
		void initilize(string b, float w, int c) {
			brand = b;
			weight = w;
			calories = c;
		}
};

int main() {
	int i;
	candyBar *snack[3];
	for(i = 0; i < 3; i++) {
		snack[i] = new candyBar;
	}
	cout << "\n -- CandyBar Program --";
	snack[0]->initilize("Cherry Crusade", float(3.2), 300);
	snack[1]->initilize("Strawberry Surprise", float(2.6), 270);
	snack[2]->initilize("Orange Octagons", float(1.5), 150);
	for(i = 0; i < 3; i++) {
		cout << "\n\n   Snack Details:";
		cout << "\n     Brand Name: " << snack[i]->brand;
		cout << "\n     Weight:     " << snack[i]->weight;
		cout << "\n     Calories:   " << snack[i]->calories;
	}
	cout << "\n\n -- End CandyBar Program --" << endl << endl;
	for(i = 0; i < 3; i++) {
		Delete snack[i];
	}
	return 0;
}
