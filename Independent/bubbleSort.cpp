// Implementation File for Bubble Sort
#include "bubbleSort.h"
// Bubble Class Constructor
bubble::bubble() {
	numberOfElements = 0;
}

// Function to insert the data into the array
void bubble::insertData(int data) {
	arrBubble[numberOfElements] = data;
	numberOfElements++;
}

// Function to display the data
void bubble::displayData() {
	for(int counter = 0; counter < numberOfElements; counter++) {
		cout << arrBubble[counter] << " ";
	}
}

// Bubble Sort Algorithm
void bubble::bubbleSort() {
	int i, j, temp;
	cout << endl;
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10 - i; j++) {
			if (arrBubble[j] > arrBubble[j + 1]) {
				temp = arrBubble[j];
				arrBubble[j] = arrBubble[j + 1];
				cout << "\n Swapping " << temp << " for " << arrBubble[j + 1] << ".";
				arrBubble[j + 1] = temp;
			}
		}
	}
}
