//������(pointer) : ������ �ּҸ� �����ϴ� ����

#include <stdio.h>

int main() {

	int a = 20;
	char c = 'h';
	
	int *ptr_a;
	char *ptr_c;

	ptr_a = &a;
	ptr_c = &c;
	
	printf("a�� �� %d\n", a);
	printf("a�� �ּҰ� %d\n", &a);
	printf("ptr_a�� ����� �� %d\n", ptr_a);
	printf("ptr_a�� ����Ű�� ������ �� %d\n", *ptr_a);
	return 0;
}