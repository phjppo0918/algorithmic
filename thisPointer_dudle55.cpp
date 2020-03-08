//this 자기 자신을 가리키는 포인터

#include <iostream>

using namespace std;

class MyClass {
public:
	void printThis() {
		cout << "나의 주소는" << this << endl;
	}
	void printThis(MyClass *ptr) {
		cout << "나의 주소는" << ptr << endl;
	}
};

int main() {
	MyClass a, b;
	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;
	
	a.printThis();
	b.printThis();

	a.printThis(&a);
	b.printThis(&b);
	
	return 0;
}