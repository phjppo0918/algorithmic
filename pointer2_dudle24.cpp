#include <stdio.h>

int main() {

	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr�� ����Ű�� ������ ����� �� %d\n", *ptr);

	ptr = &b;
	printf("ptr�� ����Ű�� ������ ����� �� %d\n", *ptr);

	ptr = &a;
	printf("a�� �� %d\n", a);
	*ptr = 20;
	printf("a�� �� %d\n", a);
	
	a = 10;
	ptr = &a;
	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);
	
	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptr_ptr = %d\n", ptr_ptr);
	printf("*ptr_ptr = %d\n", *ptr_ptr);
	printf("**ptr_ptr = %d\n", **ptr_ptr);

	return 0;
}