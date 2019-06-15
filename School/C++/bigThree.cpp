#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#define fileIn "leafSize.lee"
using namespace std;

float findAve(float[]);
void bigThree(float[], float*, float*, float*);

int main() {
	float leafSize[25], avg, big1, big2, big3;
	int counter = 0;
	big1 = 0;
	big2 = 0;
	big3 = 0;
	ifstream input;
	input.open(fileIn, ios::in);
	if(!input) {
		cout << "\n File Not Found!\n" << endl;
		exit(1);
	}
	while(!input.eof()) {
		input >> leafSize[counter];
		++counter;
	}
	avg = findAve(leafSize);
	bigThree(leafSize, &big1, &big2, &big3);
	cout << "\n This is the Adverage: " << avg << endl;
	cout << "\n These are the 3 Largest Values\n\n       " << big1 << "\n\n       " << big2 << "\n\n       " << big3 << endl << endl;
	return 0;
}

float findAve(float leafSize[25]) {
	float sum = 0.0, avg;
	int x;
	for(x = 0; x < 25; ++x) {
		sum = sum + leafSize[x];
	}
	avg = sum / 25;
	return avg;
}

void bigThree(float leafSize[25], float *ptr_big1, float *ptr_big2, float *ptr_big3) {
	int x, n;
	float t;
	for(x = 0; x < 24; ++x) {
		for(n = 1; n < 25; ++n) {
			if(leafSize[n - 1] < leafSize[n]) {
				t = leafSize[n];
				leafSize[n] = leafSize[n - 1];
				leafSize[n - 1] = t;
			}
		}
	}
	*ptr_big1 = leafSize[0];
	*ptr_big2 = leafSize[1];
	*ptr_big3 = leafSize[2];
}
