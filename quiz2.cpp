/*���� ��� for���� ����Ͽ� ������ �迭�� ����Ͻÿ�*/

#include <iostream>

int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{10,20,30,40},
		{100,200,300,400}
	};
	//�ϴ� �Ϲ����� for������ ����� ������ x
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//�ϴ� �Ϲ����� for������ ����� j�κ� ������ o
	for (int i = 0; i < 3; i++) {
		for (int* j = arr[i]; j < arr[i] + 4; j++) {
			printf("%d ", *j);
		}
		printf("\n");
	}
	printf("\n");
	//i�κ��� �迭�����ͷ� ����
	// int�� 4ĭ¥�� �迭 �����͸� ����: ln
	for (int(*ln)[4]=arr; ln < arr + 3; ln++) {
		for (int* c = *ln; c < *ln + 4; c++) {
			// ���� ���⼭ *ln�� �ƴ� ln�̸� ��� �ɱ�?
			printf("%d ", *c);
		}
		printf("\n");
	}
	printf("\n");

	for (int(*ln)[4] = arr; ln < arr + 3; ln++) {
		for (int* c = *ln; c < *ln + 4; c++) {
			// ���� ���⼭ *ln�� �ƴ� ln�̸� ��� �ɱ�?
			printf("%d ", *c);
		}
		printf("\n");
	}
	printf("\n");

	//https://boycoding.tistory.com/207

	for (int(&col)[4] : arr) {
		for (int& row : col) {
			printf("%d ", row);
		}
		printf("\n");
	}


	return 0;
}