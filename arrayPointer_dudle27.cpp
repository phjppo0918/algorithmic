/*
1. arr == &arr[0]
2. *ptr == ptr[0]
3. ptr+1 == ptr에 sizeof(*ptr)을 더한 값
*/
#include <stdio.h>

int main() {

	int arr[2][3] = {
		{1,2,3},
		{4,5,6},
	};

	int arrOne[5] = { 1,2,3,4,5 };
	int* ptr_arrOne = arrOne;

	printf("%d\n", sizeof(arr)); //24
	printf("%d\n", sizeof(arr[0])); //12
	printf("%d\n", sizeof(arr[0][0])); //4
	 

	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr[0]));
	printf("%d\n", sizeof(&arr[0][0]));

	int (*ptr)[3] = arr;
	// arr != arr[0] ?
	//1. ptr[i] == arr[i]
	//2. ptr[i][j] == arr[i][j]
	//ptr == arr


	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", ptr[i][j]);
		}
	}






	return 0;

}