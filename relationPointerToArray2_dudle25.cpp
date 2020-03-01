#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr_array = arr;
	printf("arr의 값 : %d\n",arr);
	printf("arr + 1의 값 : %d\n",arr+1);

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n",i, &arr[i]);
		printf("arr+ %d = %d\n",i, &arr[i]);
	}

	for (int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {

		printf("%d ", i[ptr_array]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");

	return 0;
}