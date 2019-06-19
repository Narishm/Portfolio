#include <iostream>
#include <windows.h>
#include <winbase.h>
using namespace std;

int binarySearch (int sortedArray[], int searchKey, int first, int last) {
	int mid = (first + last) / 2, rval = 100;
	if(searchkey > sortedArray[mid]) rval = binarySearch(sortedArray, searchKey, (mid + 1), last);
	else if(searchKey < sortedArray[mid]) rval = binarySearch(sortedArray, searchKey, first, (mid - 1));
	else if(searchKey == sortedArray[mid]) rval = mid;
	return rval;
}

int main() {
	int choice = 0, search = 0, result = 0, sArray[] = {2, 6, 8, 10, 13, 17, 21, 22, 23, 35, 39, 43, 44, 46, 55, 65, 77, 89, 90, 98};
	bool repeater = true;
	do {
		system("CLS");
		cout << "\n --- Binary Search Program ---";
		cout << "\n\n  -- Array Values --\n\n  { ";
		for(int i = 0; i < 20; i++) {
			cout << sArray[i] << " ";
		}
		cout << "}";
		cout << "\n\n  What do you want to do?";
		cout << "\n\n    1) Search for a Value";
		cout << "\n    2) Exit Program";
		cout << "\n\n  Enter Choice: ";
		cin >> choice;
		switch(choice) {
			case 1:
				system("CLS");
				cout << "\n -- Enter Search Value --";
				cout << "\n\n  -- Array Values --\n\n  { ";
				for(int i = 0; i < 20; i++)	{
					cout << sArray[i] << " ";
				}
				cout << "}";
				cout << "\n\n  What do you want to search for? ";
				cin >> search;
				result = binarySearch(sArray, search, 0, 19);
				if(result < 0 || result > 98) {
					cout << "\n\n  Value Not In Array!";
				}
				else {
					cout << "\n\n  Value Found in Position " << result << ".";
				}
				Sleep(5000);
				break;
			case 2:
				repeater = false;
				break;
				default:
				break;
			}
		}while(repeater == true);
	cout << endl;
	return 0;
}
