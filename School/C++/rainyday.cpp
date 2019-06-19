#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1("It Is A Rainy Day."), s2("Very "), s3("Sunny ");
	cout << "\n      S1 = " << s1;
	cout << "\n      S2 = " << s2;
	cout << "\n      S3 = " << s3;
	s1.insert(8, s2);
	cout << "\n      S1 = " << s1;
	s1.replace(13, 6, s3);
	cout << "\n      S1 = " << s1;
	s1.erase(8, 5);
	cout << "\n      S1 = " << s1;
	s1 = "\n\n All Done With Strings!\n";
	cout << s1 << endl;
	return 0;
}
