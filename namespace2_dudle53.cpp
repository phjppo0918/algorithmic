#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}
namespace doodle {
	int n;
	void set() {
		n = 20;
	}

	namespace google {
		int n;
		void set() {
			n = 30;
		}
	}
}