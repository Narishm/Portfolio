// Implementation file for insertion sort
# include "insertionSort.h"
// Insertion Sort class Constructor
insertionSort::insertionSort() {
	numberOfElements = 0;
}

// Function to insert the data in the array
void insertionSort::insertData(int data) {
	dataArray[numberOfElements] = data;
	numberOfElements++;
}

// Function to display the data
void insertionSort::displayData() {
	int counter;
	for (counter = 0; counter < numberOfElements; counter++) {
		std::cout << dataArray[counter] << " ";
	}
}

// Insertion Sort Algorithm
void insertionSort::insertSort() {
	int allElement, subElement;
	int tempData;
	for (allElement = 1; allElement < 10; ++allElement) {
		tempData = dataArray[allElement];
		for (subElement = allElement -1; subElement> = 0; --subElement) {
			if (dataArray[subElement] > tempData) {
				dataArray[subElement + 1] = dataArray[subElement];
			}
			else break;
		}
		cout << "\n Swapping " << dataArray[subElement + 1] << " for " << tempData << ".";
		dataArray[subElement + 1] = tempData;
	}
}
