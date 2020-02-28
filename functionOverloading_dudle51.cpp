//overload
#include <iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
	 
}
void swap(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a(20), b(30);
	double da(2.222), db(3.333);
	int* pa(&a), * pb(&b);


	swap(a, b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	swap(da, db);
	std::cout << "da: " << da << std::endl;
	std::cout << "db: " << db << std::endl;
	
	swap(pa, pb);
	std::cout << "*pa: " << *pa << std::endl;
	std::cout << "*pb: " << *pb << std::endl;

	return 0;
}