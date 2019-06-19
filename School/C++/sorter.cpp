#include "bubbleSort.h"
#include "insertionSort.h"
#include <windows.h>
#include <winbase.h>
#include <iostream>
using namespace std;

int main() {
	int answer = 0, i = 0;
	bool repeater = true;
	int values[20];
	bubble myBubble;
	insertionSort myInsert;
	do {
		system("CLS");
		cout << "\n --- Sorting Program ---";
		cout << "\n\n  What Do You Want To Do?";
		cout << "\n   1) Enter Values to be Sorted";
		cout << "\n   2) Sort the Data using Bubble Sort";
		cout << "\n   3) Sort the Data using Insertion Sort";
		cout << "\n   4) Exit the Program";
		cout << "\n Your Choice: ";
		cin >> answer;
		switch(answer) {
			case 1:
				system("CLS");
				cout << "\n --- Enter Values --- \n\n";
				for(i = 0; i < 10; i++) {
					cout << " Please Enter Value #" << i + 1 << ": ";
					cin >> values[i];
				}
				for(i = 0; i < 10; i++) {
					myBubble.insertData(values[i]);
				}
				for(i = 0; i < 10; i++) {
					myInsert.insertData(values[i]);
				}
				break;
			case 2:
				cout << "\n --- Order Entered ---\n\n  < ";
				for(i = 0; i < 10; i++) {
					cout << values[i] << " ";
				}
				cout << ">" << endl;;
				myBubble.bubbleSort();
				cout << "\n\n --- Bubble Sort Result ---\n\n  { ";
				myBubble.displayData();
				cout << "}\n";
				Sleep(10000);
				break;
			case 3:
				cout << "\n --- Order Entered ---\n\n  < ";
				for(i = 0; i < 10; i++) {
					cout << values[i] << " ";
				}
				cout << ">\n" << endl;;
				myInsert.insertSort();
				cout << "\n\n --- Insertion Sort Result ---\n\n  [ ";
				myInsert.displayData();
				cout << "]";
				Sleep(10000);
				break;
			case 4:
				repeater = false;
				break;
				default:
				break;
			}
		}while(repeater == true);
	cout << endl;
	return 0;
}
