/*범위 기반 for문을 사용하여 이차원 배열을 출력하시오*/

#include <iostream>

int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{10,20,30,40},
		{100,200,300,400}
	};
	//일단 일반적인 for문으로 만들기 포인터 x
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//일단 일반적인 for문으로 만들기 j부분 포인터 o
	for (int i = 0; i < 3; i++) {
		for (int* j = arr[i]; j < arr[i] + 4; j++) {
			printf("%d ", *j);
		}
		printf("\n");
	}
	printf("\n");
	//i부분을 배열포인터로 선언
	// int형 4칸짜리 배열 포인터를 선언: ln
	for (int(*ln)[4]=arr; ln < arr + 3; ln++) {
		for (int* c = *ln; c < *ln + 4; c++) {
			// 만약 여기서 *ln이 아닌 ln이면 어떻게 될까?
			printf("%d ", *c);
		}
		printf("\n");
	}
	printf("\n");

	for (int(*ln)[4] = arr; ln < arr + 3; ln++) {
		for (int* c = *ln; c < *ln + 4; c++) {
			// 만약 여기서 *ln이 아닌 ln이면 어떻게 될까?
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