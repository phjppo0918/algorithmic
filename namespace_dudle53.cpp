//namespace
#include<iostream>

using namespace std;

int n;
void set() {
	n = 10;
//����� ���� ����
}
namespace doodle {
	int n;
	void set() {
		n = 20;
	}
}
namespace google {
	int n;
	void set() {
		n = 30;
		::n = 40;
		doodle::n = 30;
	}
}

int main() {
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;

	return 0;
}

void doodle::set() {
	n = 230;
}