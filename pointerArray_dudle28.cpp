//�迭 ������ : �迭�� ����Ű�� ������
//������ �迭 : �����͵��� �迭



#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int(*ArrayPtr)[4]; //�迭 ������
	int* ptrArray[4]; //������ �迭

	ptrArray[0] = &a;
	ptrArray[1] = &c;
	ptrArray[2] = &d;
	ptrArray[3] = &b;

	printf("%d %d %d %d\n", *ptrArray[0], *ptrArray[1],
		*ptrArray[2], *ptrArray[3]);

	int arr[4] = { 1,2,3,4 };

	for (int i = 0; i < 4; i++) {
		ptrArray[i] = &arr[i];
	}
	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptrArray[i]);
	}
	printf("\n");

	return 0;
}