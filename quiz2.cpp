/*���� ��� for���� ����Ͽ� ������ �迭�� ����Ͻÿ�*/

#include <iostream>

int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{10,20,30,40},
		{100,200,300,400},
	};
	for (int(&ln)[4] : arr) {
		for (int j : ln) {
			std::cout << j<<" ";
		}
		std::cout << std::endl;
	}

	for (int (*ln)[4]; ln < arr + 2; ln++) {
		
	}

	return 0;
}