// Header File for Bubble Sort
#include <iostream>
using namespace std;
// Bubble Class
class bubble {
	private:
		int arrBubble[10];
		int numberOfElements;
	public:
		bubble();
		void insertData(int data);
		void displayData();
		int * arr() {
			return arrBubble;
		}
		int count() {
			return numberOfElements;
		}
		void bubbleSort();
};
