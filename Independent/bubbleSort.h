// Header File for Bubble Sort
// Class Constructor
class bubble
{
private:
	int arrBubble[10];
	int numberOfElements;
public:
	bubble();
	void insertData (int data);
	void displayData ();
	int * arr()
	{
		return arrBubble;
	}
	int count()
	{
		return numberOfElements;
	}
	void bubbleSort();
};
