/*
10*10 ������ ������ ������ �迭�� �Է¹޾�
�� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������

�Է�
3 4
4 2 6 3
7 9 3 4
5 1 2 1

���
15
23
9
*/
#include <stdio.h>

int main() {
	int col, row, total = 0;
	int array[10][10];
	scanf("%d %d", &col, &row);
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", *(array + i)+ j);
		}
	}
	/*for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d", *(*(array+i)+j));
		}
	}*/
	for (int i = 0; i < col; i++) {
		for (int* j = *(array + i); j < *(array + i)+row; j++) {
			total += *j;
		}
		printf("%d\n", total);
		total = 0;
	}

	return 0;
}