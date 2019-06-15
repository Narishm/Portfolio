// Header file for insertion sort.
# include <iostream>
using namespace std;
// Insertion Sort Class
class insertionSort {
	private :
		int dataArray[10];
		int numberOfElements;

	public:
		insertionSort();
		void insertData(int data);
		void displayData();
		void insertSort();
		int count() {
			return numberOfElements;
		}
		int * arr() {
			return dataArray;
		}
};
