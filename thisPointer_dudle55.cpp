//this �ڱ� �ڽ��� ����Ű�� ������

#include <iostream>

using namespace std;

class MyClass {
public:
	void printThis() {
		cout << "���� �ּҴ�" << this << endl;
	}
	void printThis(MyClass *ptr) {
		cout << "���� �ּҴ�" << ptr << endl;
	}
};

int main() {
	MyClass a, b;
	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;
	
	a.printThis();
	b.printThis();

	a.printThis(&a);
	b.printThis(&b);
	
	return 0;
}