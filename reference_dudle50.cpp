#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a(5);
	int &p(a);
	int num1(10), num2(20);
	p = 10;

	cout << p << endl;
	cout << a << endl;

	swap(num1, num2);

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// r-value
	int&& r1 = 3;
	int&& r2 = a * a;
	return 0;
}