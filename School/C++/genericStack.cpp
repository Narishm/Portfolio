#include <iostream>
using namespace std;

const int SIZE = 10;

template <class stackType> class stack {
	private:
		stackType stck[SIZE];
		int tos;
	public:
		stack() {tos = 0;};
		void push(stackType ob);
		stackType pop();
};

template <class stackType> void stack<stackType>::push(stackType ob) {
	if(tos == SIZE) {
		cout << "\n\n Stack is full!";
		return;
	}
	stck[tos] = ob;
	tos++;
}

template <class stackType> void stack<stackType>::pop(stackType ob) {
	if(tos == 0) {
		cout << "\n\n Stack is empty!";
		return 0;
	}
	tos--;
	return stck[tos];
}

int main() {
	stack<char> s1, s2;
	int i;
	cout << "\n -- A Generic Stack Class Program --" << endl;
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for(i = 0; i < 3; i++) {
		cout << "\n Pop s1: " << s1.pop() << endl;
	}
	for(i = 0; i < 3; i++) {
		cout << "\n Pop s2: " << s2.pop() << endl;
	}
	stack<double> ds1, ds2;
	ds1.push('1.1');
	ds2.push('2.2');
	ds1.push('3.3');
	ds2.push('4.4');
	ds1.push('5.5');
	ds2.push('6.6');
	for(i = 0; i < 3; i++) {
		cout << "\n Pop ds1: " << ds1.pop() << endl;
	}
	for(i = 0; i < 3; i++) {
		cout << "\n Pop ds2: " << ds2.pop() << endl;
	}
	return 0:
}
