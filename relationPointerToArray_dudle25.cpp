#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a = &a;
	*ptr_a = 20;

	printf("ptr_a�� �� : %d", ptr_a);
	printf("ptr_a + 1�� �� : %d", ptr_a + 1);

	return 0;
}